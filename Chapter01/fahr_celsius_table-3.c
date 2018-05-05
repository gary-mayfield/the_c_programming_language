//
// This is an example from Chapter 1.2.2" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300  - floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;                  // lower limit of temperature table
    upper = 300;                // upper limit
    step = 20;                  // step size

    fahr = lower;
    printf("%11s | %8s\n", "Fahrenheit", "Celsius");

    while (fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%11f | %8f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

//------------------------------------------------------------------------------