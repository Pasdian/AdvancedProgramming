#include "stdio.h"

/* 
Done

Write a complete program with a function that returns the median
(middle) of three integer values. Read the three values from console.


*/



int main()
{
    int a, b, c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);

    a > b ? (a > c ? (b > c ? printf("%d", b) : printf("%d", c)): printf("%d", a)) : (
        b > c ? (a > c ? printf("%d", a) : printf("%d", c)) : printf("%d", b));

    return 0;
}
