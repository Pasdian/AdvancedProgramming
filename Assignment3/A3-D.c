#include "stdio.h"

/* 
Done

Write a complete program which gets three integers from the user console and call a function min
 that takes three integers as parameters and returns the smallest of the three values, such that 
 a call of min(3, -2, 7) would return -2, and a call of min(19, 27, 6) would return 6. User the 
 ternary operator "? :" to implement your min function.


*/



int main()
{
    int a, b, c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);

    (a > b) ? ((b > c) ? printf("%d", c) : printf("%d", b)) : ((a > c) ? printf("%d", c) : printf("%d", a));


    return 0;
}
