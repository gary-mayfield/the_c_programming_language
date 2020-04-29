//
// This is an example from Chapter 1.8" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

int power(int m, int n);

/* test power function */
main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    }
    return 0;
    
}

/* power: raise base to the n-th power; n >= 0*/
int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
    
}