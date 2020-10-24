#include <stdio.h>
/* 
done
-----1-----
----333----
---55555---
--7777777--
-999999999-

*/

int main()
{
    int row;
    int col;
    int k;
    int l;
    int acc = 0;

    for (row = 1; row <= 10; row++)
    {
        if (row % 2 != 0)
        {
            acc++;

            for (col = 5; col > row-acc; col--)
            {
                printf("-");
            }
            for (k = 1; k <= row; k++)
            {
                printf("%d", row);
            }

            for (l = 5; l > row-acc; l--)
            {
                printf("-");
            }
            printf("\n");
        }
        
    }
    return 0;
}