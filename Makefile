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

.PHONY: test clean asan ubsan analyze ci
test: parser
	chmod +x tests/smoke.sh
	./tests/smoke.sh
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

.PHONY: regen
regen:
	@mkdir -p grammar $(BUILD_SRC) $(BUILD_INC)
	@echo "Regenerating grammar from grammar.$(BASELINE) -> grammar/grammar.y ..."
	./mkgramy $(BASELINE)
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
	./mknames
	@echo "Done. Run 'make' to rebuild."
