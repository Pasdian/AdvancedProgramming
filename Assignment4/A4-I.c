#include "stdio.h"

/* 
Done


A "perfect number" is a positive integer that is the sum of all its proper factors 
(that is, factors including 1 but not the number itself). The first two perfect 
numbers are 6 and 28, since 1+2+3=6 and 1+2+4+7+14=28. Write a complete program 
with a function perfectNumbers that takes an integer max as an argument and prints 
out all perfect numbers that are less than or equal to max.

Here is the console output from a call to perfectNumbers(6): Perfect numbers up to 6: 6

# Entrada

n1 integer




*/

int main()
{
    int max;
    scanf("%d", &max);

    printf("Perfect numbers up to %d:", max);

    for (int i = 1; i <= max; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf(" %d ", i);
        }
    }

    return 0;
}
