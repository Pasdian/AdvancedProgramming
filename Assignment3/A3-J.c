#include "stdio.h"
#include <math.h>


/*
DONE

n1^n2-1....n1^n2

*/

void printPowersOfN(double base, double exp) {

     for (double i = 0; i <= exp; i++)
    {
        printf("%0.lf ", pow(base, i));
    }

}

int main()
{
    double base, pow;
    scanf("%lf\n", &base);
    scanf("%lf", &pow);

    printPowersOfN(base, pow);

    return 0;
}
