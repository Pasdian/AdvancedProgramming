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

void printSquare(double min, double max)
{

    for (int i = min; i <= max; i++)
    {
        for (int j = i; j <= max; j++)
        {
            printf("%d", j);
        }
        for (int k = min; k < i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
}




int main()
{
    double min, max;
    scanf("%lf\n", &min);
    scanf("%lf", &max);

    printSquare(min, max);

    return 0;
}
