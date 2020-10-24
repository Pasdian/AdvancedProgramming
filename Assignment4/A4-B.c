#include "stdio.h"

/*
DONE

 For example, the six factors of 12 are 1, 2, 3, 4, 6, and 12, so the call countFactors(12) should return 6.
*/

int countFactors(int n)
{

    unsigned int i = 1;
    int num = 0;

    while (i * i < n)
    {
        if (n % i == 0)
        {
            num += 2;
        }
        i++;
    }
    if (i * i == n)
    {
        num++;
    }

    return num;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", countFactors(num));

    return 0;
}
