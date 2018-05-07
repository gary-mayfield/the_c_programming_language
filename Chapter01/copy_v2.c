//
// This is an example from Chapter 1.5.1" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------

/* copy input to output; 2nd version */
int main()
{
    int c;

    while ((c = getchar()) != EOF){
        putchar(c);
    }
}

//------------------------------------------------------------------------------