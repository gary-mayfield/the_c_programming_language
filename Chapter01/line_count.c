//
// This is an example from Chapter 1.5.3" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------
/* count lines in input */

int main()
{
    int c, nl;

    nl = 0;
    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}

//------------------------------------------------------------------------------