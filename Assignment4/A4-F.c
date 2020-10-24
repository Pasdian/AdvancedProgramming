#include "stdio.h"

/* 
Done


xooox
oxoxo
ooxoo
oxoxo
xooox


*/

void xo(int size)
{
    for (int rows = 1; rows <= size; rows++)
    {
        for (int cols = 1; cols <= size; cols++)
        {
            if (rows == cols)
            {
                printf("x");
            }
            else if (cols == size - rows + 1)
            {
                printf("x");
            }
            else
            {
                printf("o");
            }
        }
        printf("\n");
    }
}

int main()
{
    int a;
    scanf("%d\n", &a);
    xo(a);
    

    return 0;
}
