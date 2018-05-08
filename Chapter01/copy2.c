//
// This is an example from Chapter 1.5.3" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------
/* copy input to output, replacing tabs, backspace and backslash with \t, \b and \\ */

int main()
{
    int c;
        
    while((c = getchar()) != EOF)
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
               
}

//------------------------------------------------------------------------------