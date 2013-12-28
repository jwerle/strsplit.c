strsplit.c
==========

Split a string into a char array by a given delimiter

## install

```sh
$ clib install jwerle/strsplit.c
```

## usage

```c
size_t size = strsplit(str, parts, "\n");
```

## example

```c

#include "strsplit.h"

int
main (void) {
	char str[] = "hello\nworld";
	char **parts = calloc(1, sizeof(char));
	size_t size = strsplit(str, parts, "\n");
	int i = 0;
	for (; i < size; ++i) {
		printf("%s\n", parts[i]);
	}

	return 0;
}
```

## license

MIT
