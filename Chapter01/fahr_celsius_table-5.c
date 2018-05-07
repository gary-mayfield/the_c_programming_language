//
// This is an example from Chapter 1.4" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------

# define LOWER 0                    /* lower limit of table */
# define UPPER 300                  /* upper limit */
# define STEP 20                    /* step size */

/* print Farenheit-Celsius table */
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}

//------------------------------------------------------------------------------