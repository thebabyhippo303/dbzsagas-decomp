#!/usr/bin/env python3
"""One-command repository & ProDG byte-match verifier for DBZ: Sagas (GZEE70)."""
import argparse
import hashlib
import json
import os
import re
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
EXPECTED_DOL_SHA1 = "a05529b36f903f0efecfc7528ccb4801b15bc15b"
DEFAULT_DOL = ROOT / "orig" / "GZEE70" / "sys" / "main.dol"


def load_symbols(path: Path):
    syms = {}
    pat = re.compile(r"^(\S+)\s*=\s*\.([^:]+):(0x[0-9A-Fa-f]+);(.*)$")
    for line in path.read_text(errors="replace").splitlines():
        m = pat.match(line.strip())
        if not m or "type:function" not in m.group(4):
            continue
        name, sec, addr_s, rest = m.groups()
        sm = re.search(r"size:(0x[0-9A-Fa-f]+)", rest)
        size = int(sm.group(1), 16) if sm else 0
        syms[int(addr_s, 16)] = (name, size, f".{sec}")
    return syms


def load_functions_tsv(path: Path):
    rows = []
    with path.open() as f:
        header = f.readline().rstrip("\n").split("\t")
        for line in f:
            parts = line.rstrip("\n").split("\t")
            if len(parts) == len(header):
                rows.append(dict(zip(header, parts)))
    return rows


def verify_tree(rows, syms):
    errors = []
    if len(syms) != len(rows):
        errors.append(f"symbols.txt has {len(syms)} functions, functions.tsv has {len(rows)}")

    matched_cnt = 0
    unmatched_cnt = 0
    asm_hits = []
    missing_files = []

    for r in rows:
        addr = int(r["addr"], 16)
        if addr not in syms:
            errors.append(f"address {r['addr']} ({r['name']}) missing from symbols.txt")
        fpath = ROOT / r["file"]
        if not fpath.is_file():
            missing_files.append(r["file"])
            continue
        txt = fpath.read_text(errors="replace")
        if r["status"] == "matched":
            matched_cnt += 1
            if "__asm__" in txt or "__attribute__((naked))" in txt:
                asm_hits.append(r["file"])
        else:
            unmatched_cnt += 1

    if missing_files:
        errors.append(f"{len(missing_files)} missing source files (e.g. {missing_files[0]})")
    if asm_hits:
        errors.append(f"{len(asm_hits)} matched files contain inline asm/naked (e.g. {asm_hits[0]})")

    prog = json.loads((ROOT / "progress" / "progress.json").read_text())
    if prog.get("total_functions") != len(rows):
        errors.append(f"progress.json total_functions={prog.get('total_functions')} != {len(rows)}")
    if prog.get("matched_functions") != matched_cnt:
        errors.append(f"progress.json matched_functions={prog.get('matched_functions')} != {matched_cnt}")

    return errors, matched_cnt, unmatched_cnt


def verify_dol_sha1(dol_path: Path):
    h = hashlib.sha1(dol_path.read_bytes()).hexdigest()
    return h == EXPECTED_DOL_SHA1, h


def dol_va_to_off(dol: bytes, va: int) -> int:
    offs = [struct.unpack(">I", dol[i:i + 4])[0] for i in range(0, 18 * 4, 4)]
    addrs = [struct.unpack(">I", dol[0x48 + i:0x4C + i])[0] for i in range(0, 18 * 4, 4)]
    sizes = [struct.unpack(">I", dol[0x90 + i:0x94 + i])[0] for i in range(0, 18 * 4, 4)]
    for i in range(18):
        if sizes[i] and addrs[i] <= va < addrs[i] + sizes[i]:
            return offs[i] + (va - addrs[i])
    raise KeyError(hex(va))


def norm_ppc(w: int) -> int:
    op = w >> 26
    if op == 18:
        return w & 0xFC000003  # b/bl
    if op == 16:
        return w & 0xFFFF0003  # bc
    if op in (14, 15):
        return w & 0xFFFF0000  # addi/lis
    if 32 <= op <= 55:
        ra = (w >> 16) & 0x1F
        if ra in (0, 2, 13):
            return w & 0xFFE00000  # abs/sda load/store
    return w


def parse_elf32_be(obj_bytes: bytes):
    """Extract .text bytes and defined function symbols from a big-endian PPC ELF32 .o."""
    if obj_bytes[:4] != b"\x7fELF" or obj_bytes[4] != 1 or obj_bytes[5] != 2:
        raise ValueError("Not a 32-bit big-endian ELF object")
    e_shoff = struct.unpack(">I", obj_bytes[32:36])[0]
    e_shentsize, e_shnum, e_shstrndx = struct.unpack(">HHH", obj_bytes[46:52])
    shdrs = []
    for i in range(e_shnum):
        base = e_shoff + i * e_shentsize
        shdrs.append(struct.unpack(">IIIIIIIIII", obj_bytes[base:base + 40]))
    shstr_off = shdrs[e_shstrndx][4]

    def read_cstr(off, idx):
        end = obj_bytes.index(b"\x00", off + idx)
        return obj_bytes[off + idx:end].decode("ascii", errors="replace")

    text_idx = None
    text_data = b""
    symtab = None
    strtab_off = None
    for idx, sh in enumerate(shdrs):
        name = read_cstr(shstr_off, sh[0])
        if name == ".text":
            text_idx = idx
            text_data = obj_bytes[sh[4]:sh[4] + sh[5]]
        elif sh[1] == 2:  # SHT_SYMTAB
            symtab = sh
            strtab_off = shdrs[sh[6]][4]

    funcs = {}
    if symtab and text_idx is not None:
        s_off, s_size, s_entsize = symtab[4], symtab[5], symtab[9] or 16
        for p in range(s_off, s_off + s_size, s_entsize):
            st_name, st_val, st_size, st_info, _, st_shndx = struct.unpack(">IIIBBH", obj_bytes[p:p + 16])
            if st_shndx == text_idx and st_name:
                sname = read_cstr(strtab_off, st_name)
                funcs[sname] = (st_val, st_size)
    return text_data, funcs


def compile_and_diff(row, dol: bytes, prodg_dir: Path):
    src = ROOT / row["file"]
    va = int(row["addr"], 16)
    sz = int(row["size"], 16)
    name = row["name"]
    with tempfile.TemporaryDirectory(prefix="sagas_verify_") as td:
        out_o = Path(td) / "out.o"
        env = dict(os.environ, SN_NGC_PATH=str(prodg_dir), WINEDEBUG="-all")
        cmd = ["wine", str(prodg_dir / "ngccc.exe"), "-O2", "-c", "-o", str(out_o), str(src)]
        with tempfile.TemporaryFile(mode="w+") as fo, tempfile.TemporaryFile(mode="w+") as fe:
            p = subprocess.Popen(cmd, env=env, stdin=subprocess.DEVNULL, stdout=fo, stderr=fe, text=True)
            rc = p.wait(timeout=60)
            fo.seek(0)
            fe.seek(0)
            if rc != 0 or not out_o.exists():
                return False, f"compile failed (rc={rc}): {(fe.read() or fo.read()).strip()[-200:]}"
        text_data, funcs = parse_elf32_be(out_o.read_bytes())
        if name not in funcs:
            return False, f"symbol {name} not defined in object"
        f_off, _ = funcs[name]
        got = [struct.unpack(">I", text_data[f_off + i:f_off + i + 4])[0] for i in range(0, sz, 4)]
        dol_off = dol_va_to_off(dol, va)
        want = [struct.unpack(">I", dol[dol_off + i:dol_off + i + 4])[0] for i in range(0, sz, 4)]
        if len(got) != len(want):
            return False, f"word count mismatch ({len(got)} vs {len(want)})"
        ok = sum(1 for x, y in zip(got, want) if norm_ppc(x) == norm_ppc(y))
        if ok == len(want):
            return True, f"100% ({ok}/{len(want)} insns)"
        return False, f"{ok}/{len(want)} insns matched"


def main():
    ap = argparse.ArgumentParser(description="Verify DBZ: Sagas (GZEE70) decompilation repo.")
    ap.add_argument("--dol", type=Path, default=DEFAULT_DOL, help="Path to GZEE70 main.dol")
    ap.add_argument("--prodg", type=Path, default=Path(os.environ.get("PRODG_DIR", "")),
                    help="Path to SN ProDG 3.9.3 directory (or set PRODG_DIR)")
    ap.add_argument("--func", action="append", default=[],
                    help="Compile & byte-diff specific function name(s) against main.dol")
    ap.add_argument("--compile-all", action="store_true",
                    help="Compile & byte-diff all matched ProDG functions against main.dol")
    args = ap.parse_args()

    syms = load_symbols(ROOT / "config" / "GZEE70" / "symbols.txt")
    rows = load_functions_tsv(ROOT / "progress" / "functions.tsv")
    errors, matched_cnt, unmatched_cnt = verify_tree(rows, syms)

    print(f"[repo] {len(rows):,} functions ({matched_cnt:,} matched, {unmatched_cnt:,} unmatched stubs)")
    if errors:
        for e in errors:
            print(f"[FAIL] {e}")
        return 1
    print("[OK]   symbols.txt, functions.tsv, progress.json, and all 9,961 src/ files verified (0 inline asm)")

    if args.dol.is_file():
        ok, sha1 = verify_dol_sha1(args.dol)
        if not ok:
            print(f"[FAIL] {args.dol} SHA-1 mismatch: {sha1} != {EXPECTED_DOL_SHA1}")
            return 1
        print(f"[OK]   {args.dol} SHA-1 matches Redump GZEE70 ({sha1})")
    elif args.func or args.compile_all:
        print(f"[FAIL] main.dol not found at {args.dol} (supply --dol or place at orig/GZEE70/sys/main.dol)")
        return 1
    else:
        print(f"[SKIP] {args.dol} not present (place your GZEE70 main.dol there to enable SHA-1 & compile checks)")
        return 0

    if not args.func and not args.compile_all:
        return 0

    if not str(args.prodg) or not (args.prodg / "ngccc.exe").is_file():
        print("[FAIL] Set PRODG_DIR=/path/to/prodg_393 (or pass --prodg) containing ngccc.exe to compile-verify")
        return 1

    dol = args.dol.read_bytes()
    by_name = {r["name"]: r for r in rows}
    targets = []
    if args.compile_all:
        targets = [r for r in rows if r["status"] == "matched" and r["compiler"].startswith("ProDG")]
    else:
        for fn in args.func:
            if fn not in by_name:
                print(f"[FAIL] unknown function: {fn}")
                return 1
            targets.append(by_name[fn])

    passed = 0
    failed = 0
    for r in targets:
        ok, msg = compile_and_diff(r, dol, args.prodg)
        tag = "PASS" if ok else "FAIL"
        if not args.compile_all or not ok:
            print(f"[{tag}] {r['name']} ({r['addr']}): {msg}")
        if ok:
            passed += 1
        else:
            failed += 1
    print(f"[compile] {passed}/{len(targets)} matched, {failed} failed")
    return 0 if failed == 0 else 2


if __name__ == "__main__":
    sys.exit(main())
