# Dragon Ball Z: Sagas — GameCube Decompilation (`GZEE70`)

A matching C decompilation repository for **Dragon Ball Z: Sagas** (Nintendo GameCube, USA, `GZEE70`).

> **No copyrighted game assets or binaries are included.** You must supply `main.dol` from your own legally owned copy of the game (SHA-1: `a05529b36f903f0efecfc7528ccb4801b15bc15b`) at `orig/GZEE70/sys/main.dol` (gitignored).

## Progress

| Metric | Count | Percent |
|---|---:|---:|
| **Functions matched (pure C)** | **6,636 / 9,961** | **66.62%** |
| **Functions remaining (TODO stubs)** | **3,325 / 9,961** | **33.38%** |
| **Functions named** | **9,281 / 9,961** | **93.17%** |
| **Code bytes matched** | **991,716 / 3,161,132** | **31.37%** |

See [progress/SUMMARY.md](progress/SUMMARY.md) for the per-class breakdown and [progress/functions.tsv](progress/functions.tsv) for the full 9,961-function table.

## Verify

Run the one-command verifier from the repo root:

```bash
python3 tools/verify.py
```

This checks all 9,961 function entries across `config/GZEE70/symbols.txt`, `progress/functions.tsv`, `progress/progress.json`, and `src/` (ensuring zero inline-asm stubs), and verifies `orig/GZEE70/sys/main.dol` SHA-1 if present.

To also compile and byte-diff matched C against your `main.dol` with SN ProDG 3.9.3 (under Wine):

```bash
PRODG_DIR=/path/to/prodg_393 python3 tools/verify.py --func Assert_Fail
# or verify all matched ProDG functions:
PRODG_DIR=/path/to/prodg_393 python3 tools/verify.py --compile-all
```

## Repository Layout

- `config/GZEE70/symbols.txt` — All 9,961 function symbols (9,281 named, 680 unnamed) and data symbols in `dtk` format.
- `config/GZEE70/splits.txt` — Section and SDK splits.
- `config/GZEE70/config.yml` — `dtk` project config.
- `src/<Class>/<Method>.c` — Every one of the 9,961 functions has its own file:
  - **Matched functions (6,636):** Pure C matching SN Systems ProDG 3.9.3 (`-O2`).
  - **Unmatched functions (3,325):** Clean "fill-in-the-blank" stub files containing the address, byte size, section, and target compiler.
  - Non-class functions live in `src/global/`; unnamed functions live in `src/unnamed/`.
- `docs/COMPILER.md` — SN ProDG 3.9.3 & Dolphin SDK (MWCC) compiler notes.
- `tools/dtk-patches/` — `dtk` 1.8.4 patch for SN ProDG trap words.
- `progress/` — Machine-readable `functions.tsv`, `progress.json`, and `SUMMARY.md`.

## Contributing ("Fill in the Blank")

1. Pick any `unmatched` function from `progress/functions.tsv` (or open any stub in `src/`).
2. Disassemble the function from your `orig/GZEE70/sys/main.dol` using `dtk` (with `tools/dtk-patches/0001-sn-prodg-trap-words-and-invalid-reloc-guard.patch`).
3. Create a scratch on [decomp.me](https://decomp.me/) using **SN ProDG 3.9.3** (`prodg_393`) with `-O2` (or MWCC GC/1.x for Dolphin SDK bands — see `docs/COMPILER.md`).
4. Replace the `TODO` stub in `src/<Class>/<Method>.c` with pure matching C (no inline assembly / `__attribute__((naked))`).
5. Optional: you can use the standalone [Kintoun](https://github.com/thebabyhippo303/kintoun) matching-C permuter and verifier with this repository (see `examples/dbzsagas-decomp/kintoun.toml` in that repo). Kintoun is an external tool whose output exception guarantees that C code matched with it is not subject to Kintoun's GPL-3.0 license.

## License

The project's own work in this repository (the decompiled game code, tools, configuration and documentation written for this project) is dedicated to the **Public Domain** under **CC0 1.0 Universal**. See [LICENSE](LICENSE). No copyrighted game assets or binaries are included.

The CC0 dedication does not cover third-party code and interfaces that appear here because the game contains them. They remain the property of their respective owners and are not dedicated to the public domain:

- **Nintendo's GameCube (Dolphin) SDK** and the start-up and compiler runtime linked with it: the folders `src/OS`, `src/DVD`, `src/PAD`, `src/VI`, `src/SI`, `src/EXI`, `src/DB`, `src/VM`, `src/CARDDir`, `src/CARDWrite` and `src/Runtime`, and the SDK functions in `src/global` (the `GX`, `GD`, `OS`, `DVD`, `VI`, `SI`, `EXI`, `PAD`, `AI`, `AR`, `ARQ`, `AX`, `MIX`, `DSP`, `CARD`, `PPC`, `C_MTX`, `VM`, `DB` and `DEMO` function families), matching the Metrowerks-compiled address bands listed in [docs/COMPILER.md](docs/COMPILER.md). (`src/AI` is the game's own enemy AI, not the SDK's audio interface.)
- **RAD Game Tools' Bink** video codec: `src/Bink`, `src/BinkAX`, `src/BinkFFT`, `src/BinkIODVD`, `src/BinkVideo`, and the `Bink*` and `rad*`/`RAD*` functions in `src/global`.
- **Metrowerks' debugger support** (the `FileServer` / MetroTRK band in [docs/COMPILER.md](docs/COMPILER.md)): `src/FileServer`.
- **SN Systems' C library** functions in `src/global` (for example `memcpy`, `strlen`, `sprintf`, `qsort` and the math functions).

These files stay in the repository so the game builds and matches as a whole; this section only states what the dedication covers.
