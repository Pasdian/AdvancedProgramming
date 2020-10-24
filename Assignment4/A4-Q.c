#include "stdio.h"
#include "math.h"

/* 
Done

For example, digitSum(29107) returns 2+9+1+0+7 or 19.

# Entrada

n1 integer


sum of Digits


*/

int swapDigitPairs(int n){
    int res = 0, spot = 1;
    while (n > 9)
    {
        res += spot * 10 * (n % 10);
        n /= 10;
        res += spot * (n % 10);
        n /= 10;
        spot *= 100;
    }
    printf("%d", res + spot * n);
    return 0;
    

}

int main()
{
    int a;
    scanf("%d", &a);
    swapDigitPairs(a);
    return 0;
}
