#include <stdio.h>
/* 
DONE
!!!!!!!!!!!!!!!!!!!!!!
\\!!!!!!!!!!!!!!!!!!//
\\\\!!!!!!!!!!!!!!////
\\\\\\!!!!!!!!!!//////
\\\\\\\\!!!!!!////////
\\\\\\\\\\!!//////////

*/

int main()
{
    int row;
    int col;
    int k;
    int l;

    printf("!!!!!!!!!!!!!!!!!!!!!!\n");

    for (row = 1; row <=3; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("\\\\");
        }
        for (k = 6; k >= row*2; k--)
        {
            printf("!!");
        }
        for (l = 1; l <= row; l++)
        {
            printf("//");
        }
        printf("\n");
    }
    return 0;
}
