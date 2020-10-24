#include "stdio.h"

/* 
Done

Write a complete program with a function called countQuarters that takes an int representing 
a number of cents as a parameter and returns the number of quarter coins represented by that
 many cents. Don't count any whole dollars, because those would be dispensed as dollar bills.
  For example, a call of countQuarters(1278) would return 3, because after the 12 dollars are
   taken out, 3 quarters remain in the 78 cents left.


*/

int main()
{
    int cents, result;
    scanf("%d", &cents);

    int remainder = cents % 100;
    result = remainder / 25;

    printf("%d", result);


    

    return 0;
}
