//
// This is an example from Chapter 1.5.1" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------

/* copy input to output; 1st version */
int main()
{
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}

//------------------------------------------------------------------------------