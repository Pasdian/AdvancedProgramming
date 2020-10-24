#include "stdio.h"

/*  */

int circularRightShift(unsigned long int num, unsigned int shift){
    return (num >> shift) | (num << (32 - shift));
}


int main()
{
    unsigned long int num;
    int shift;
    scanf("%lu\n", &num);
    scanf("%d", &shift);
    printf("%d", circularRightShift(num, shift));
    

    return 0;
}