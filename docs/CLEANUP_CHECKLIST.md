# Lojban Parser: Pre-GLR/Earley Cleanup Checklist

Purpose: stabilize and modernize the codebase with low-risk changes before experimenting with GLR or Earley. Perform all work on a branch to preserve the current working implementation.

## Branch strategy

- [ ] Create a prep branch from master
  - Suggested: `git checkout -b glr-prep` (or `earley-prep`)
- [ ] Keep changes small and incremental; merge via PRs
- [ ] Tag/baseline master before starting (e.g., `v3-prep-baseline`)

## Safety: baseline behavior and tests

- [ ] Establish a baseline corpus (e.g., `openwm.txt`, plus any other texts)
- [ ] Add/extend smoke tests that exercise all output modes
  - `make test` already runs default, `-p`, `-t`, `-y` on `openwm.txt`
- [ ] Commit expected snippets for sanity checks (grep-based or golden files)
- [ ] Add an AddressSanitizer run to catch memory issues
  - `make asan` then run the same smoke test
- [ ] Define acceptance criteria: “no crashes; key substrings present; identical output for baseline inputs”

## Build system hardening

- [ ] Ensure Makefile recompiles when any source changes (already uses SOURCES)
- [ ] Add/confirm common flags: `-std=c99 -g -O0 -Wall -Wextra`
- [ ] Optional stricter flags (gate behind `STRICT=1`): `-Wshadow -Wconversion -Wpointer-arith -Wformat=2 -Werror`
- [ ] Keep dedicated sanitizer targets:
  - AddressSanitizer: `-fsanitize=address -fno-omit-frame-pointer`
  - UBSan (optional): `-fsanitize=undefined`

## Generated vs source separation

- [ ] Treat `grammar.y` as the source of truth
- [ ] Add a `make regen` target to regenerate `grammar.c/h` via modern bison
- [ ] Avoid direct edits to generated files; if committed, clearly mark and keep in sync
- [ ] Document bison/flex versions required

## Headers and interfaces

- [ ] Ensure every header has include guards (token.h, grammar.h done)
- [ ] Centralize prototypes in headers (e.g., `int yylex(void);`) and remove ad‑hoc duplicates
- [ ] Align function signatures between headers and implementations (e.g., `yyerror(const char*)`)
- [ ] Prefer prototype-style definitions over K&R as files are touched

## Undefined behavior and memory safety

- [ ] Never mutate string literals or library‑owned memory
  - rprint/prologize now copy to writable buffers (keep pattern project‑wide)
- [ ] When using `<ctype.h>`, cast to `unsigned char` before `isalnum/tolower/...`
- [ ] Ensure all non‑void functions return a value (fixed in `filter.c`)
- [ ] Audit static buffer allocators (`newstring`) for bounds and lifetime
  - [ ] Consider adding assertions/logs for unusually large strings
- [ ] Prefer explicit sizes (`snprintf`, `strnlen`) where applicable
- [ ] Run `make asan` + smoke tests; fix any reported issues

## Logging and diagnostics

- [ ] Keep `-d` flags but document them in `README`
- [ ] Add a `--help` (done) and `--version` (done)
- [ ] Optionally add a `--verbose` level that maps to existing debug flags

## Documentation
## Branch strategy
- [ ] Update `README` with:
## Safety: baseline behavior and tests
  - build/asan/test instructions
## Build system hardening (best‑practice defaults)

- [ ] Ensure Makefile recompiles when any source changes (already uses SOURCES)
- [ ] Use a modern C standard for portability
  - Best default: `-std=c17` (aka c11 with defect fixes); fallback: `-std=c11`
- [ ] Recommended debug/dev flags by default
  - `-g -O0 -Wall -Wextra -Wpedantic -Wstrict-prototypes -Wold-style-definition`
  - Add gradually (optional but good): `-Wshadow -Wconversion -Wdouble-promotion -Wformat=2 -Wnull-dereference`
  - Tip: keep `-Werror` only in CI to avoid blocking local work
- [ ] Dedicated sanitizer targets (enable one at a time during debugging)
  - AddressSanitizer: `-fsanitize=address -fno-omit-frame-pointer`
  - UndefinedBehaviorSanitizer: `-fsanitize=undefined`
  - LeakSanitizer (Clang): `-fsanitize=leak` (often included in ASan)
  - ThreadSanitizer (for threaded code, not needed here): `-fsanitize=thread`
- [ ] Optional GCC analyzer target: add a `make analyze` with `-fanalyzer` (GCC 10+)
- [ ] Keep build reproducible: avoid wildcard linking order issues; use `$(SOURCES)` and explicit `$@ $^`

Beginner tip: start with the first line of warnings, fix only what you touch, and enable stricter flags behind an opt‑in (e.g., `STRICT=1`).
## Pre‑GLR/Earley acceptance tests
## Generated vs source separation (best practice)
## Headers and interfaces (best practice)
- [ ] Document performance baseline (runtime, memory on your machine)
## Undefined behavior and memory safety (best practice)
## GLR/Earley migration plan (next branch after prep)
## Logging and diagnostics (best practice)
- [ ] Branch from `glr-prep` to `glr-migration`
## Documentation (best practice)
  - [ ] Add `%glr-parser` to `grammar.y`, regenerate
## CI (optional but recommended, best practice)
  - [ ] Compare outputs against baselines; keep differences reviewed and intentional
## Pre‑GLR/Earley acceptance tests
  - [ ] Port grammar; reuse tokenizer
## GLR/Earley migration plan (next branch after prep)
  - [ ] Validate parity on corpus; measure performance
## Rollback and safety
## Rollback and safety
## Quick commands (reference)
- [ ] Keep each change atomic; re-run tests between steps
- [ ] If a change breaks baselines, revert or gate it behind a flag

## Quick commands (reference)

```bash
# create prep branch
git checkout -b glr-prep

# build, run tests
make && make test

# address sanitizer run
make clean && make asan && ./tests/smoke.sh

# (optional) strict warnings
make clean && STRICT=1 make CFLAGS="-std=c99 -g -O0 -Wall -Wextra -Wshadow -Wconversion -Wpointer-arith -Wformat=2 -Werror"
```

## Project structure (best practice)

Recommended layout for clarity, tooling, and safe builds:

```
root/
  Makefile  README  COPYING  license
  docs/            # documentation
  include/         # public headers (lojban.h, token.h, node.h, version.h)
  grammar/         # grammar sources (grammar.y)
  src/             # C sources (absorb.c, lex.c, print.c, ...)
    generated/     # generated sources (grammar.c) if kept
    lexer/         # optional: group lexrule*.c
  tests/           # test scripts (smoke.sh)
  samples/         # sample inputs (openwm.txt, ...)
  tools/           # helper scripts (doyacc, mkgramy, mknames, *.awk)
  build/
    obj/           # object files
    bin/           # built binaries (parser)
```

Migration tasks (do incrementally):
- [ ] Create directories: `include/`, `src/`, `grammar/`, `src/generated/`, `tests/`, `docs/`, `samples/`, `tools/`, `build/obj`, `build/bin`
- [ ] Move headers to `include/` and add `-Iinclude` to compile flags
- [ ] Move `.c` sources to `src/` (optionally `src/lexer/` for `lexrule*.c`)
- [ ] Move `grammar.y` to `grammar/`; configure bison outputs to `src/generated/` and `include/`
- [ ] Move input samples (e.g., `openwm.txt`) to `samples/`
- [ ] Move helper scripts (`doyacc`, `mkgramy`, `mknames`, `*.awk`) to `tools/`
- [ ] Update `Makefile` variables and rules; verify `make`, `make test`, and `make asan`
- [ ] Decide on generated files policy: exclude from VCS or commit regen’d outputs with pinned tool versions

Makefile hints (sketch):

```make
SRCDIR := src
INCDIR := include
OBJDIR := build/obj
BINDIR := build/bin
GENDIR := $(SRCDIR)/generated

CC ?= cc
CFLAGS ?= -std=c17 -g -O0 -Wall -Wextra -Wpedantic -I$(INCDIR)

SOURCES := $(wildcard $(SRCDIR)/**/*.c) $(wildcard $(SRCDIR)/*.c)
OBJECTS := $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

$(BINDIR)/parser: $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJDIR) $(BINDIR)
```
