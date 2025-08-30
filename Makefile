CC ?= cc
CFLAGS ?= -g -O0 -Wall -Wextra -Wno-unused-parameter

parser:
	$(CC) $(CFLAGS) -o parser *.c

asan:
	$(CC) $(CFLAGS) -fsanitize=address -fno-omit-frame-pointer -o parser *.c

.PHONY: test
test: parser
	chmod +x tests/smoke.sh
	./tests/smoke.sh
clean:
	rm -f *.o parser
