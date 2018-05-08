//
// This is an example from Chapter 1.5.3" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------
/* copy input to output, replacing blanks */

int main()
{
    int c;
    int space;

    space = 0;
        
    while((c = getchar()) != EOF)
        if (c == ' ')
        {
            if (space == 0)
            {
                putchar(c);
                space = 1;
            }
        }
        else
        {
            putchar(c);
            space = 0;
        }        
}

//------------------------------------------------------------------------------