#include <stdio.h>
/* 
DONE
4
!!!!!!!!!!!!!!
\\!!!!!!!!!!//
\\\\!!!!!!////
\\\\\\!!//////
7
!!!!!!!!!!!!!!!!!!!!!!!!!!
\\!!!!!!!!!!!!!!!!!!!!!!//
\\\\!!!!!!!!!!!!!!!!!!////
\\\\\\!!!!!!!!!!!!!!//////
\\\\\\\\!!!!!!!!!!////////
\\\\\\\\\\!!!!!!//////////
\\\\\\\\\\\\!!////////////
6
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
    int i;
    int col;
    int k;
    int l;

    int number;

    scanf("%d", &number);

    for (i = 1; i <= (number * 4) - 2; i++)
    {
        printf("!");
    }
    printf("\n");

    for (row = 1; row <= (number - 1); row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("\\\\");
        }
        for (k = (number - 1) * 2; k >= row * 2; k--)
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
