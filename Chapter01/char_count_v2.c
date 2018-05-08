//
// This is an example from Chapter 1.5" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

/* count characters in input: 2nd version */
//------------------------------------------------------------------------------

int main()
{
    double nc;

    for(nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);

}

//------------------------------------------------------------------------------