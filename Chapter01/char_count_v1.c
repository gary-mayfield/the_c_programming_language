//
// This is an example from Chapter 1.5" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

/* count characters in input: 1st version */
//------------------------------------------------------------------------------

int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);

}

//------------------------------------------------------------------------------