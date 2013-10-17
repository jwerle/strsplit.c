
#ifndef __STR_SPLIT_H__
#define __STR_SPLIT_H__ 1

#include <stdlib.h>
#include <string.h>

int
strsplit (char *str, char *parts[], char *delimiter) {
  char *pch;
  int i = 0;
  pch = strtok(str, delimiter);

  parts[i++] = strdup(pch);

  while (pch) {
    pch = strtok(NULL, delimiter);
    if (NULL == pch) break;
    parts[i++] = strdup(pch);
  }

  free(pch);
  return i;
}


#endif
