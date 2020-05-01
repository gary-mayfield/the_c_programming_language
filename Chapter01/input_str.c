#include <stdio.h>
#include "input_str.h"

int input_str(char *s, int maxroom)
{
  int rc = 0; /* we set this to EOF if there's a problem */
  int ch;     /* temporary storage for each character */
  int curpos = 0; /* where to write the next character */

  --maxroom; /* reserve a place for the null terminator */

  while(curpos < maxroom &&
        (ch = getchar()) != EOF &&
        (s[curpos++] = ch) != '\n')
  {
  }

  s[curpos] = 0; /* null terminate the string */

  if(ch == EOF)
  {
    rc = EOF;
  }
  return rc;
}