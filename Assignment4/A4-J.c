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

    int i = 0;

    do
    {
        if (num % 10 == 0)
        {
            i++;
        }
        num /= 10;
        
    } while (num > 0);

    printf("%d", i);
    

    return 0;
}
