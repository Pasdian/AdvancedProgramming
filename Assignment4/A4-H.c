#include "stdio.h"

/* 
Done


Quadrant number (point)



*/

int main()
{
    double x, y;
    scanf("%lf\n", &x);
    scanf("%lf", &y);

    if (x > 0 && y > 0)
    {
        printf("1");
    }
    if (x < 0 && y > 0)
    {
        printf("2");
    }
    if (x < 0 && y < 0)
    {
        printf("3");
    }
    if (x > 0 && y < 0)
    {
        printf("4");
    }
    if (x == 0 || y == 0)
    {
        printf("0");
    }
    

    return 0;
}
