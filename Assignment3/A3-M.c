#include "stdio.h"
#include <stdlib.h>

/*
DONE

12345
23451
34512
45123
51234

*/

void largerAbsVal(int a, int b)
{
    (abs(a) > abs(b)) ? printf("%d", abs(a)) : printf("%d", abs(b));

}

int main()
{
    double a, b;
    scanf("%lf\n", &a);
    scanf("%lf", &b);

    largerAbsVal(a, b);

    return 0;
}
