CC ?= cc
CFLAGS ?= -g -O0 -Wall -Wextra -Wno-unused-parameter -Iinclude -I.

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
