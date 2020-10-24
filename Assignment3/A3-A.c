#include "stdio.h"

void printer(double x, double y)
{
    printf("x = %.2f and y = %.2f \n", x, y);
}

int main()
{

    double y = 867.5309;
    int z = 5;
    double x = 10.01;
    printer(x, 8.0);
    printf("x = %.2f and y = %.4f \n", x, y);
    printf("The value from main is: %.4f\n", y);
    printf("z = %d", z);


    return 0;
}
