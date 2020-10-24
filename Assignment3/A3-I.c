#include "stdio.h"
#include <math.h>


/*
DONE

low? high? sum = 55

*/

void toPower(double n) {

     for (double i = 0; i <= n; i++)
    {
        printf("%0.lf ", pow(2, i));
    }

}

int main()
{
    double high;
    scanf("%lf", &high);
    toPower(high);

    return 0;
}
