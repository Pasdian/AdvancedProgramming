#include "stdio.h"

/*  */

int circularLeftShift(unsigned long int num, unsigned int shift){
    return (num << shift) | (num >> (32 - shift));
}


int main()
{
    unsigned long int num;
    int shift;
    scanf("%lu\n", &num);
    scanf("%d", &shift);
    printf("%u", circularLeftShift(num, shift));
    

    return 0;
}