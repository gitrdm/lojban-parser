CC ?= cc
# C standard can be overridden, e.g. make STD=c17
STD ?= c11
# Base warnings stay mild to avoid churn; stricter ones are gated behind STRICT=1
BASE_WARN := -Wall -Wextra -Wno-unused-parameter
STRICT_WARN := -Wpedantic -Wshadow -Wconversion -Wpointer-arith -Wformat=2
CFLAGS ?= -std=$(STD) -g -O0 $(BASE_WARN) -Iinclude -I.

# Default goal: build the parser. Use `make help` to list targets.
.DEFAULT_GOAL := parser

# Opt-in strict mode: make STRICT=1
ifeq ($(STRICT),1)
	CFLAGS += $(STRICT_WARN)
endif

# Baseline grammar publication to regenerate from (e.g., 233 or 300)
BASELINE ?= 300
YACC ?= bison
YACC_FLAGS ?= -d

ROOT_SOURCES := $(wildcard *.c)
SRC_SOURCES := $(wildcard src/*.c)
SOURCES := $(ROOT_SOURCES) $(SRC_SOURCES)

# Build directories for generated artifacts (kept inside repo for simplicity)
BUILDDIR := build
BUILD_SRC := $(BUILDDIR)/src
BUILD_INC := $(BUILDDIR)/include

parser: $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

asan:
	$(CC) $(CFLAGS) -fsanitize=address -fno-omit-frame-pointer -o parser $(SOURCES)

# UndefinedBehaviorSanitizer build (optional)
ubsan:
	$(CC) $(CFLAGS) -fsanitize=undefined -fno-omit-frame-pointer -o parser $(SOURCES)

.PHONY: test clean asan ubsan analyze ci regress regress-update regen glr analyze-glr ebnf diagrams lark check-lark sentences-manifest regress-sentences help parser_lr parser_glr all-parsers
help:
	@echo "Usage: make [target]" && echo && \
	echo "Targets:" && \
	echo "  parser                Build the parser (default)" && \
	echo "  parser_lr             Build LR parser binary (regenerate without GLR)" && \
	echo "  parser_glr            Build GLR parser binary (regenerate with GLR)" && \
	echo "  all-parsers           Build both LR and GLR; symlink parser -> parser_lr" && \
	echo "  regen                 Regenerate grammar and headers" && \
	echo "  glr                   Regenerate with GLR and build" && \
	echo "  test                  Run smoke tests" && \
	echo "  regress               Run regression suite" && \
	echo "  regress-update        Refresh regression goldens" && \
	echo "  ebnf                  Export EBNF (grammar/grammar.ebnf)" && \
	echo "  diagrams              Generate railroad diagrams (optional tool)" && \
	echo "  lark                  Export Lark grammar skeleton" && \
	echo "  check-lark            Validate the Lark grammar loads" && \
	echo "  asan                  Build with AddressSanitizer" && \
	echo "  ubsan                 Build with UndefinedBehaviorSanitizer" && \
	echo "  analyze               Run GCC static analyzer (if available)" && \
	echo "  analyze-glr           Run analyzer on GLR build" && \
	echo "  sentences-manifest    Generate JSONL manifest from test_sentences.txt" && \
	echo "  regress-sentences     Run sentence-based regressions (TODO placeholder)" && \
	echo && \
	echo "Default target: parser"
test: parser
	chmod +x tests/smoke.sh
	./tests/smoke.sh
regress: parser
	chmod +x tests/regress/run.sh
	./tests/regress/run.sh
regress-update: parser
	chmod +x tests/regress/run.sh
	./tests/regress/run.sh --update
clean:
	rm -f *.o src/*.o parser parser_lr parser_glr

# Static analyzer (GCC -fanalyzer) - compiles sources with analyzer enabled
analyze:
	@set -e; \
	if $(CC) --version 2>/dev/null | grep -qi gcc; then \
		echo "Running GCC analyzer..."; \
		for f in $(SOURCES); do \
			$(CC) $(CFLAGS) -fanalyzer -c $$f -o /dev/null; \
		done; \
	else \
		echo "Analyzer: GCC not detected; skipping (-fanalyzer requires GCC 10+)"; \
	fi

ci:
	$(MAKE) clean
	$(MAKE) regen
	$(MAKE)
	$(MAKE) test

# Export an EBNF-like grammar from the generated Yacc grammar
ebnf: grammar/grammar.y tools/yacc_to_ebnf.awk
	@mkdir -p grammar
	awk -f tools/yacc_to_ebnf.awk grammar/grammar.y > grammar/grammar.ebnf
	@echo "Wrote grammar/grammar.ebnf"

# Generate simple railroad diagrams (requires ebnf2railroad; optional)
diagrams: ebnf
	@if command -v ebnf2railroad >/dev/null 2>&1; then \
		ebnf2railroad grammar/grammar.ebnf > docs/grammar_railroad.html; \
		echo "Wrote docs/grammar_railroad.html"; \
	else \
		echo "ebnf2railroad not found; skipping diagram generation"; \
	fi

# Generate a Lark-compatible grammar skeleton
lark: grammar/grammar.y tools/yacc_to_lark.awk
	@mkdir -p grammar
	awk -f tools/yacc_to_lark.awk grammar/grammar.y > grammar/grammar.lark
	@echo "Wrote grammar/grammar.lark"

# Validate the generated Lark grammar by attempting to load it with Lark
check-lark: lark
	@command -v python3 >/dev/null 2>&1 || { echo "python3 not found"; exit 1; }
	@python3 tools/validate_lark_grammar.py

# Build JSONL manifest from test_sentences.txt
sentences-manifest:
	@command -v python3 >/dev/null 2>&1 || { echo "python3 not found"; exit 1; }
	@python3 tools/convert_sentences_to_jsonl.py tests/regress/test_sentences.txt tests/regress/inputs/test_sentences.jsonl
	@echo "Wrote tests/regress/inputs/test_sentences.jsonl"

# Placeholder target: run only the sentence-based regressions (runner to be implemented)
regress-sentences: parser_lr parser_glr sentences-manifest
	@command -v python3 >/dev/null 2>&1 || { echo "python3 not found"; exit 1; }
	@echo "Running sentence regressions against LR and GLR..."
	@python3 tools/run_sentences_regress.py --jsonl tests/regress/inputs/test_sentences.jsonl \
		--parser ./parser_lr --label LR \
		--parser ./parser_glr --label GLR \
		--jobs $${JOBS:-$$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)} \
		--out-jsonl tests/regress/outputs/sentences_results.jsonl || true
	@echo "Wrote tests/regress/outputs/sentences_results.jsonl"

.PHONY: regen glr analyze-glr
TS_DIR := external/tree-sitter-lojban

# Tree-sitter: generate and test (optional; requires tree-sitter-cli via npm)
.PHONY: ts-generate ts-test ts-clean
ts-generate:
	@cd $(TS_DIR) && \
	if command -v tree-sitter >/dev/null 2>&1; then \
		echo "Generating Tree-sitter parser (global CLI)..."; \
		tree-sitter generate; \
	elif command -v npx >/dev/null 2>&1; then \
		echo "Generating Tree-sitter parser (via npx)..."; \
		npx tree-sitter generate; \
	else \
		echo "tree-sitter CLI not found; install Node.js and tree-sitter-cli"; exit 1; \
	fi

ts-test:
	@cd $(TS_DIR) && \
	if command -v tree-sitter >/dev/null 2>&1; then \
		echo "Running Tree-sitter tests (global CLI)..."; \
		tree-sitter test || true; \
	elif command -v npx >/dev/null 2>&1; then \
		echo "Running Tree-sitter tests (via npx)..."; \
		npx tree-sitter test || true; \
	else \
		echo "tree-sitter CLI not found; install Node.js and tree-sitter-cli"; \
	fi

ts-clean:
	@rm -f $(TS_DIR)/src/parser.c $(TS_DIR)/src/node-types.json $(TS_DIR)/src/tree_sitter/parser.h
regen:
	@mkdir -p grammar $(BUILD_SRC) $(BUILD_INC)
	@echo "Regenerating grammar from grammar/grammar.$(BASELINE) -> grammar/grammar.y ... (GLR=$(GLR))"
	GLR=$(GLR) tools/mkgramy $(BASELINE)
	@if [ -f version.h ]; then \
		echo "Updating include/version.h"; \
		mv -f version.h include/version.h; \
	fi
	@echo "Generating parser sources (prefer bison, fallback to yacc) ..."
	@set -e; \
	if command -v bison >/dev/null 2>&1; then \
		echo "Using bison"; \
		bison -d -o src/grammar.c grammar/grammar.y; \
		if [ -f src/grammar.h ]; then HDR_PATH=src/grammar.h; else HDR_PATH=grammar.tab.h; fi; \
	elif command -v yacc >/dev/null 2>&1; then \
		echo "Using yacc"; \
		yacc -d grammar/grammar.y; \
		mv -f y.tab.c src/grammar.c; \
		HDR_PATH=y.tab.h; \
	else \
		echo "Error: neither bison nor yacc found" >&2; exit 1; \
	fi; \
	if [ -f "$$HDR_PATH" ]; then \
		echo "Copying $$HDR_PATH -> include/grammar.h"; \
		cp -f "$$HDR_PATH" include/grammar.h; \
	else \
		echo "Warning: could not find generated header $$HDR_PATH"; \
	fi
	@echo "Regenerating rulename.i ..."
	tools/mknames
	@echo "Done. Run 'make' to rebuild."

# Convenience target to regenerate with GLR enabled (uses gmiddle.glr.y)
glr:
	$(MAKE) regen GLR=1
	$(MAKE)

# Analyzer run on GLR build
analyze-glr:
	$(MAKE) clean
	$(MAKE) glr
	$(MAKE) analyze

# Build separate LR and GLR binaries (regenerating in-between) and a convenience symlink
parser_lr:
	$(MAKE) regen GLR=0
	$(MAKE)
	@mv -f parser parser_lr

parser_glr:
	$(MAKE) regen GLR=1
	$(MAKE)
	@mv -f parser parser_glr

all-parsers: parser_lr parser_glr
	ln -sf parser_lr parser
