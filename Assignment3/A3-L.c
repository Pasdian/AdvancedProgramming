#include "stdio.h"
#include <math.h>

/*
DONE

12345
23451
34512
45123
51234

*/

void printGrid(double rows, double cols)
{
    int count = 0;

    for (int i = 1; i <= rows; i++)
    {
        count = i;
        for (int j = 1; j <= cols; j++)
        {
            printf("%d", count);
            if (j != cols)
            {
                printf(", ");
                        }
                        count += rows;
            
                }
                printf("\n");
    }
}

int main()
{
    double rows, cols;
    scanf("%lf\n", &rows);
    scanf("%lf", &cols);

    printGrid(rows, cols);

    return 0;
}
