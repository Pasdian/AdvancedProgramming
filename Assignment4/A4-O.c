#include "stdio.h"
#include "math.h"

/* 
Done

For example, digitSum(29107) returns 2+9+1+0+7 or 19.

# Entrada

n1 integer


sum of Digits


*/

int main()
{
    int a;
    scanf("%d", &a);
    int sum = 0, copy = abs(a);

    while (copy != 0)
    {
        int rem = copy % 10;
        sum += rem;
        
        copy /= 10;
    }
    printf("%d", sum);

    return 0;
}
