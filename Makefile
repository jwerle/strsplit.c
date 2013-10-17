
all: clean test

clean:
	rm -f strsplit-test

test:
	$(CC) test.c -std=c99 -o strsplit-test
	./strsplit-test
