#include <stdio.h>
/* 
DONE

$$$$$$$**************$$$$$$$
**$$$$$$************$$$$$$**
****$$$$$**********$$$$$****
******$$$$********$$$$******
********$$$******$$$********
**********$$****$$**********
************$**$************

*/

int main()
{
    int row;
    int col;
    int k;
    int l;
    int m, n;

    for (row = 1; row <=7; row++)
    {
        for (m = 2; m <= row; m++)
        {
            printf("**");
        }
        for (col = 7; col >= row; col--)
        {
            printf("$");
        }
        for (k = 7; k >= row; k--)
        {
            printf("**");
        }
        for (l = 7; l >= row; l--)
        {
            printf("$");
        }
        for (n = 2; n <= row; n++)
        {
            printf("**");
        }
        printf("\n");
    }
    return 0;
}
