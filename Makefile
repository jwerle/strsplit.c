
SRC := strsplit.c
SRC += deps/*/*.c

all: clean test

clean:
	rm -f strsplit-test

test:
	$(CC) $(SRC) test.c -std=c99 -o strsplit-test -Ideps
	./strsplit-test
