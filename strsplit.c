
#include <stdlib.h>
#include <string.h>
#include "strsplit.h"
#include "str-copy/str-copy.h"

int
strsplit (const char *str, char *parts[], const char *delimiter) {
  char *pch;
  int i = 0;
  char *tmp = str_copy(str);
  pch = strtok(tmp, delimiter);

  parts[i++] = str_copy(pch);

  while (pch) {
    pch = strtok(NULL, delimiter);
    if (NULL == pch) break;
    parts[i++] = str_copy(pch);
  }

  free(tmp);
  free(pch);
  return i;
}
