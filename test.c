
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "strsplit.h"

int
main (void) {
  char str[] = "0 1 2 3 4 5 6 7 8 9";
  char **parts = calloc(10, sizeof(char *));
  assert(parts);
  size_t size = strsplit(str, parts, " ");
  assert(size);
  int i = 0;

  for (; i < (int) size; ++i) {
    assert(i == atoi(parts[i]));
  }

  return 0;
}
