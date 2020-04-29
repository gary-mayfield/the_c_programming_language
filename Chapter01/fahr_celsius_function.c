//
// This is exercise 1-15" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

int fahr_to_celsius(int fahr);

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;                  // lower limit of temperature table
    upper = 300;                // upper limit
    step = 20;                  // step size

    fahr = lower;
    while (fahr <= upper){
        celsius = fahr_to_celsius(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int fahr_to_celsius(int fahr)
{
    return 5 * (fahr -32) / 9;
}

//------------------------------------------------------------------------------