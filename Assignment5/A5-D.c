#include "stdio.h"
#include <math.h>

/*  */


int invert(int x, int p, int n){
    int mask;
    int pos = p;
    int top = p + n;
    while(pos < top){
        mask = pow(2, pos);
        x ^= mask;
        pos++;
    }
    return x;
}

int main()
{
    int x, p, n;
    scanf("%d", &x);
    scanf("%d", &p);
    scanf("%d", &n);

    printf("%d", invert(x, p, n));
    

    return 0;
}