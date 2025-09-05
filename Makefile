CC ?= cc
# C standard can be overridden, e.g. make STD=c17
STD ?= c11
# Base warnings stay mild to avoid churn; stricter ones are gated behind STRICT=1
BASE_WARN := -Wall -Wextra -Wno-unused-parameter
STRICT_WARN := -Wpedantic -Wshadow -Wconversion -Wpointer-arith -Wformat=2
CFLAGS ?= -std=$(STD) -g -O0 $(BASE_WARN) -Iinclude -I.

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

.PHONY: test clean asan ubsan analyze ci regress regress-update regen glr analyze-glr ebnf diagrams lark check-lark sentences-manifest regress-sentences
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
	rm -f *.o src/*.o parser

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
regress-sentences: sentences-manifest
	@echo "TODO: implement sentence regression runner; manifest ready at tests/regress/inputs/test_sentences.jsonl"

.PHONY: regen glr analyze-glr
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
