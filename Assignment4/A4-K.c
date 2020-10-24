#include "stdio.h"

/* 
Done

Write a complete program with a function called zeroDigits that accepts an integer 
parameter and returns the number of digits in the number that have the value 0. 
For example, the call zeroDigits(5024036) should return 2, and zeroDigits(743) should return 0. 
The call zeroDigits(0) should return 1. You may assume that the integer is non-negative.

# Entrada

n1 integer




*/

int main()
{
    int num;
    scanf("%d", &num);

    int count = 0;
    int copy = num;

    while (copy % 2 == 0)
    {
        count++;
        copy /= 2;
    }

    printf("%d = ", num);

    for (int i = 0; i < count; i++)
    {
        printf("2 * ");
    }
    printf("%d", copy);

    return 0;
}
