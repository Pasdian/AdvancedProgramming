#include "stdio.h"

/* 
Partial

low? high? sum = 55


*/

int main()
{
    int low, high, result = 0;
    scanf("%d\n", &low);
    scanf("%d", &high);

    for (int i = low; i <= high; i++)
    {
        result += i;
    }

    printf("low? high? sum = %d", result);

    return 0;
}
