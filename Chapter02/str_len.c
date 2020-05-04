//
// This is an example from Chapter 2.3" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield
// strlen: return length of s

#include "str_len.h"

int str_len(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;    
}