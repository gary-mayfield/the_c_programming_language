//
// This is exercise 1-19" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include "reverse.h"
#include <string.h>

void Reverse( char* string ) {
    char temp, *end_ptr;
    if( string == NULL || !(*string) ) return;
    end_ptr = string + strlen(string) - 1;

    while( end_ptr > string ) 
    { 
        temp = *string; 
        *string = *end_ptr; 
        *end_ptr = temp; string++; 
        end_ptr--; 
    } 
}