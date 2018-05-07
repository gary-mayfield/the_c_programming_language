//
// This is exercise 1-6" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------

/* verify that the expression getchar() != EOF is 0 or 1 */
int main()
{
    if((getchar() != EOF) == 0)
        printf("0\n");
    if((getchar() != EOF) == 1)
        printf("1\n");
}

//------------------------------------------------------------------------------