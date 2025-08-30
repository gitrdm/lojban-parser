# Lojban Parser: Pre-GLR/Earley Cleanup Checklist

Purpose: stabilize and modernize the codebase with low-risk changes before experimenting with GLR or Earley. Do this work on a branch to preserve the current working implementation.

## Snapshot (current status)

- [x] Working branch created: `glr-prep`
- [x] Headers moved to `include/`; sources moved to `src/`
- [x] Build green; smoke tests pass (`make test`)
- [x] `--help` and `--version` implemented
- [x] Prolog/YAML output segfault fixed by copying into writable buffers
- [x] Added `make regen` (mkgramy + bison/yacc + mknames)
- [x] Generators read/write: `src/grammar.c`, `include/grammar.h`, `rulename.i`
- [x] `mknames` consumes `include/grammar.h` (no root overwrite)
- [x] Added `make ci` (clean → regen → build → test)
- [x] Grammar assets moved to `grammar/`; obsolete root grammar files removed

## Branch strategy

- [x] Create prep branch from main
- [x] Keep changes small and incremental; commit frequently
- [ ] Tag/baseline main before merging (e.g., `v3-prep-baseline`)

## Safety: baseline behavior and tests

- [x] Establish baseline corpus (e.g., `openwm.txt`)
- [x] Smoke tests exercise default, `-p`, `-t`, `-y` (`make test`)
- [ ] Commit golden snippets or substrings to detect regressions
- [x] AddressSanitizer target available (`make asan`)
- [ ] Define acceptance criteria for each mode (no crash; key substrings; stable tree shape)

## Build system hardening

- [x] Ensure Makefile rebuilds when sources change
- [x] Default flags: `-g -O0 -Wall -Wextra` (plus include paths)
- [x] Optional strict flags (opt-in via `STRICT=1`): `-Wpedantic -Wshadow -Wconversion -Wpointer-arith -Wformat=2`
- [x] C standard selection via `STD` (default `c11`; can use `c17`)
- [x] Sanitizers: AddressSanitizer (`make asan`) and UBSan (`make ubsan`)
- [x] GCC analyzer target (`make analyze`) runs `-fanalyzer` when GCC 10+ is present

## Generated vs source separation

- [x] Treat `grammar.y` as source of truth
- [x] `make regen` regenerates `src/grammar.c` and `include/grammar.h`
- [x] `mknames` rebuilds `rulename.i` from `grammar.y` + `include/grammar.h`
- [x] Avoid direct edits to generated files; process documented in README
- [x] Move grammar assets to `grammar/`
- [ ] Consider moving generated outputs to `build/` (e.g., `build/src/grammar.c`, `build/include/grammar.h`) or `src/generated/`

## Headers and interfaces

- [x] Include guards present (token.h, grammar.h)
- [x] Central prototypes in `include/lojban.h` (e.g., `yylex`, `yyerror`)
- [x] Align signatures (e.g., `yyerror(const char*)`)
- [x] Prefer prototype-style definitions over K&R where touched

## Undefined behavior and memory safety

- [x] Don’t mutate string literals or shared buffers (fixed in rprint/prologize)
- [x] Cast to `unsigned char` before `ctype` calls
- [x] Ensure non-void functions return a value (e.g., `filter.c`)
- [x] Audit `newstring`/stringspace growth and add bounds/asserts (overflow guards, quantum-rounded allocations, counter clamp)
- [x] Prefer size-aware APIs where applicable (`snprintf`, `strnlen`)
	- Replaced unsafe copies/appends with bounded ops:
		- `getword.c`: `strcpy` -> `snprintf` with remaining buffer calc
		- `lex.c`/`print.c`/`termin.c`: `strcpy`/`strncpy` -> length-checked `memcpy`
	- Left `grammar.c` as-is (generated); changes would be clobbered by regen
- [x] Run ASan + smoke tests during changes

## Logging and diagnostics

- [x] Document debug flags in README
- [x] `--help` and `--version`
- [x] `--verbose[=N]` flag maps to `-d*` presets (N=1 default; N>=2 more)
	- Usage: `./parser --verbose openwm.txt` or `./parser --verbose=2 -p file`

## Documentation

- [x] README updated with src/include layout and regen workflow
- [x] Add contributor notes (flow: regen → build → test; where to put files)
- [x] Document toolchain expectations (bison/yacc, awk, cpp) in README (Troubleshooting)
- [x] Document Makefile knobs in README (STD, STRICT, ubsan, analyze, ci)

## CI (recommended)

- [ ] Add CI workflow invoking `make ci`
- [ ] Store and compare golden outputs (or substrings) for baseline corpus

## GLR/Earley migration (next branch after prep)

- [ ] Branch from `glr-prep` (e.g., `glr-migration`)
- [ ] Try `%glr-parser` with current grammar; fix conflicts/reduce actions
- [ ] Validate parity on corpus; measure performance
- [ ] If switching to Earley/Marpa/PEG, keep tokenizer; port grammar; measure

## Rollback and safety

- [x] Keep each change atomic; re-run tests between steps
- [ ] If a change breaks baselines, revert or gate behind a flag

## Quick commands (reference)

```bash
# create prep branch
git checkout -b glr-prep

# build and test
make && make test

# address sanitizer run
make clean && make asan && ./tests/smoke.sh

# ubsan run
make clean && make ubsan && ./tests/smoke.sh

# full local CI flow
make ci

# (optional) strict warnings (example)
make clean && make STRICT=1 STD=c11

# (optional) static analyzer (GCC 10+)
make analyze
```

## Project structure (target)

Current:

```
include/     # public headers (lojban.h, token.h, node.h, version.h, grammar.h)
src/         # all C sources (moved from root)
docs/        # documentation and checklists
tests/       # smoke tests
grammar/     # grammar assets (grammar/grammar.y generated by mkgramy)
rulename.i   # generated from grammar/grammar.y + include/grammar.h by mknames (root for now)
selmao.i     # generated include consumed by src/selmao.c (root for now)
```

Future (optional):

```
grammar/     # grammar sources (publication + mkgramy outputs)
src/generated/  # generated sources (grammar.c)
samples/        # sample inputs (openwm.txt, ...)
tools/          # mkgramy, mknames, names*.awk, doyacc
build/{obj,bin} # out-of-tree objects and binaries
```
