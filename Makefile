
all: clean test

clean:
	rm -f strsplit-test

test:
	$(CC) strsplit.c test.c -std=c99 -o strsplit-test
	./strsplit-test
