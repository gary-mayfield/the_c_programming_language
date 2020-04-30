#include "swap.h"
#include <stdlib.h>

void Swap_i(int * one, int * two){
    int temp = *one;
    *one = *two;
    *two = temp;
}

void Swap_c(char * one, char * two){
    char temp = *one;
    *one = *two;
    *two = temp;
}

void Swap_s(char ** one, char ** two){
    char *temp = *one;
    *one = *two;
    *two = temp;
}

void Swap(void *va, void *vb, size_t s)
{
  char t, *a = (char*)va, *b = (char*)vb;
  while(s--)
    t = a[s], a[s] = b[s], b[s] = t;
}