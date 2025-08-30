CC ?= cc
CFLAGS ?= -g -O0 -Wall -Wextra -Wno-unused-parameter
SOURCES := $(wildcard *.c)

parser: $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $^

asan:
	$(CC) $(CFLAGS) -fsanitize=address -fno-omit-frame-pointer -o parser *.c

.PHONY: test clean asan
test: parser
	chmod +x tests/smoke.sh
	./tests/smoke.sh
clean:
	rm -f *.o parser
