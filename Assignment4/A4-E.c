#include "stdio.h"

/* 
Done

Print an increasing sequence if the first argument is smaller than the second;
 otherwise, print a decreasing sequence. If the two numbers are the same, that number should be printed by itself.


*/

int main()
{
    int a, b;
    scanf("%d\n", &a);
    scanf("%d", &b);

    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int j = a; j >= b; j--)
        {
            printf("%d ", j);
        }
    }

    return 0;
}
