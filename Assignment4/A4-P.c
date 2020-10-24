#include "stdio.h"
#include "math.h"

/* 
Done

For example, digitSum(29107) returns 2+9+1+0+7 or 19.

# Entrada

n1 integer


sum of Digits


*/

int digitSum(int n)
{
    if (n < 10 && n > -10)
    {
        printf("1");
        return 0;
    }
    else
    {
        int min = 0, max = 0, copy = abs(n), digitSum = 0;

        int rem = copy % 10;
        min = rem;
        max = rem;

        while (copy != 0)
        {

            int currentDigit = copy % 10;
            if (currentDigit > max)
            {
                max = currentDigit;
            }
            if (currentDigit < min)
            {
                min = currentDigit;
            }

            copy /= 10;
        }
        digitSum = max - min + 1;
        printf("%d", digitSum);
        return 0;
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    digitSum(a);
    return 0;
}
