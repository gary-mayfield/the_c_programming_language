//
// This is an exercise 1-12" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

#define IN 1                // inside a word
#define OUT 0               // outside a word

/* print input, word per line */

//------------------------------------------------------------------------------

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            putchar('\n');
        }
        else{
            state = IN;
            putchar(c);
        }
    }
}

//------------------------------------------------------------------------------