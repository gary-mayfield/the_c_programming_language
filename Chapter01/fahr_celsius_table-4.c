//
// This is an example from Chapter 1.2.2" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include <stdio.h>

//------------------------------------------------------------------------------

/* print Celsius-Fahrenheit table
    for Celsius = -100, 20, ..., 100  - floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -100;                  // lower limit of temperature table
    upper = 100;                // upper limit
    step = 20;                  // step size

    celsius = lower;
    printf("%s  |  %s\n", "Celsius", "Fahrenheit");
    printf("----------------------\n");

    while (celsius <= upper){
        fahr = celsius * 1.8 + 32;
        printf("%4.0f     |  %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

//------------------------------------------------------------------------------