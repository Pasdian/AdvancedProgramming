#include "stdio.h"

/*  

120
86
52
18

305419896

1
1
1
1

1684

255
255
255
255

4294967295

*/

unsigned int fourIntOne(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    unsigned oct1, oct2, oct3;
    oct1 = a | (b << 8);
    oct2 = oct1 | (c << 16);
    oct3 = oct2 | (d << 24);
    return oct3;
}

int main()
{
    int a, b, c, d;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d\n", &c);
    scanf("%d", &d);

    printf("%u", fourIntOne(a, b, c, d));

    return 0;
}