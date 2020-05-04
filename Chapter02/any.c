//
// This is exercise 2-5" of
// "The C Programming Language" by Brian Kernighan and Dennis Ritchie
// - Gary Mayfield

#include "any.h"

int any(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0')
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
        i++;
    }
    
    return -1;  
}