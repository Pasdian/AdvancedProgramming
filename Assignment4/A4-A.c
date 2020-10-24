#include "stdio.h"

/* 
Write code to read an integer from the user, then print even if that number is an even number
 or odd otherwise. You may assume that the user types a valid integer. The input/output should match the following example:

14      even
 */

int main()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}
