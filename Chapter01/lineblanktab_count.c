//
// This is an example from Chapter 1.5.3" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------
/* count new lines, blanks and tabs in input */

int main()
{
    int c, nl, tab, blank;

    nl = 0;
    tab = 0; 
    blank = 0;
    
    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tab;
        else if (c == ' ')
            ++blank;
    printf("new lines - %d\ntabs - %d\nblanks - %d\n", nl, tab, blank);
}

//------------------------------------------------------------------------------