#include <stdio.h>
/* 
DONE

        |         |         |         |         |         |
123456789012345678901234567890123456789012345678901234567890



*/

int main()
{
    int i;
    int j;
    int k;

    printf("        ");
    for (i = 1; i <= 5; i++)
    {
        printf("|");
        printf("         ");
        
    }
    printf("|");
    printf("\n");
    for (j = 1; j <= 6; j++)
    {
        for (k = 1; k < 10; k++)
        {
            printf("%d", k);
        }
        printf("0");
    }
    return 0;
}
