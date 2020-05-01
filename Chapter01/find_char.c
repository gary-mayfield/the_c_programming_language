#include <stdio.h>
#include "find_char.h"

int find_char(char *s, int ch)
{
  char *found = NULL;
  while(*s != 0 && *s != ch)
  {
    ++s;
  }
  if(*s == ch)
  {
    found = s;
  }
  return found;
}