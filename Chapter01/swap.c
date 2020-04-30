#include "swap.h"

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