CC ?= cc
CFLAGS ?= -g -O0 -Wall -Wextra -Wno-unused-parameter -Iinclude -I.

# Baseline grammar publication to regenerate from (e.g., 233 or 300)
BASELINE ?= 300
YACC ?= bison
YACC_FLAGS ?= -d

ROOT_SOURCES := $(wildcard *.c)
SRC_SOURCES := $(wildcard src/*.c)
SOURCES := $(ROOT_SOURCES) $(SRC_SOURCES)

parser: $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

asan:
	$(CC) $(CFLAGS) -fsanitize=address -fno-omit-frame-pointer -o parser $(SOURCES)

.PHONY: test clean asan
test: parser
	chmod +x tests/smoke.sh
	./tests/smoke.sh
clean:
	rm -f *.o src/*.o parser

.PHONY: regen
regen:
	@echo "Regenerating grammar from grammar.$(BASELINE) -> grammar.y ..."
	./mkgramy $(BASELINE)
	@if [ -f version.h ]; then \
		echo "Updating include/version.h"; \
		mv -f version.h include/version.h; \
	fi
	@echo "Generating parser sources (prefer bison, fallback to yacc) ..."
	@set -e; \
	if command -v bison >/dev/null 2>&1; then \
		echo "Using bison"; \
		bison -d -o src/grammar.c grammar.y; \
		if [ -f src/grammar.h ]; then HDR_PATH=src/grammar.h; else HDR_PATH=grammar.tab.h; fi; \
	elif command -v yacc >/dev/null 2>&1; then \
		echo "Using yacc"; \
		yacc -d grammar.y; \
		mv -f y.tab.c src/grammar.c; \
		HDR_PATH=y.tab.h; \
	else \
		echo "Error: neither bison nor yacc found" >&2; exit 1; \
	fi; \
	if [ -f "$$HDR_PATH" ]; then \
		echo "Copying $$HDR_PATH -> include/grammar.h and ./grammar.h"; \
		cp -f "$$HDR_PATH" include/grammar.h; \
		cp -f "$$HDR_PATH" grammar.h; \
	else \
		echo "Warning: could not find generated header $$HDR_PATH"; \
	fi
	@echo "Regenerating rulename.i ..."
	./mknames
	@echo "Done. Run 'make' to rebuild."
