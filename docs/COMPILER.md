# Compiler & Toolchain Notes (GZEE70)

## Game Code Compiler
- **Compiler:** SN Systems ProDG for GameCube (`ngccc.exe`, GCC 2.95.3 SN BUILD v1.76)
- **Package:** `prodg_393` (from `decompme/compilers` — codegen-identical across `prodg_35`, `prodg_37`, `prodg_381`, `prodg_393` on tested functions)
- **Flags:** `-O2` (plain `-O2`; do **not** use `-O1`, `-G0`, `-mfast-cast`, or `-mps-float`)
- **Command (via Wine on Linux):**
  ```bash
  SN_NGC_PATH=/path/to/prodg_393 wine /path/to/prodg_393/ngccc.exe -O2 -c -o out.o in.c
  ```

## Dolphin SDK Compiler Bands
Nintendo's Dolphin SDK was compiled with Metrowerks CodeWarrior and linked into `main.dol`:

| Address Range | Contents | Compiler |
|---|---|---|
| `0x800032C0` | `.init` `Runtime__ResetOnPadCombo` | MWCC GC/1.x |
| `0x8015AB00–0x8015DA44` | `FileServer__*`, MetroTRK stub | MWCC GC/1.x |
| `0x80169938–0x8017D798` | PPCArch, OS, DB, DVD, VI, SI, EXI, PAD, AI, EXIChannel2 | MWCC GC/1.x (1.2.5n) |
| `0x802CEA28–0x802E9CD0` | ScreenReport/OSFatal, MTX, AR, ARQ, AX, AXFX, MIX, DSP, CARD, GX, GD | MWCC GC/1.x |
| `0x802E9CD0–0x802EB23C` | `VMInit`, `VM__*` | MWCC GC/2.0 |
| `0x80306D98–0x80306FBC` | `DLInsert`, `OSAllocFromHeap`, `OSFreeToHeap` | MWCC GC/1.x |
| Everything else | Game code, SN libc, DEMO, RAD/Bink | **ProDG 3.9.3 (`-O2`)** |

## decomp-toolkit (dtk)
Disassembling SN ProDG DOLs with `dtk` 1.8.4 requires the small patch in `tools/dtk-patches/0001-sn-prodg-trap-words-and-invalid-reloc-guard.patch` (handles SN ProDG's `0x00000001` inline assert trap word and guards invalid relocation target sections).
