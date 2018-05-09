//
// This is an example from Chapter 1.5.4" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

#define IN 1                // inside a word
#define OUT 0               // outside a word

/* count lines, words, and characters in input */

//------------------------------------------------------------------------------

int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != 'z'){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("lines - %d words - %d characters - %d\n", nl, nw, nc);
}

//------------------------------------------------------------------------------