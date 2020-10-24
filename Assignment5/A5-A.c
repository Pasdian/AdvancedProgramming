#include "stdio.h"

/* 

*/


int Palindrobits(int num) {
    int cond = num;
    int i = 0;

    while (cond > 0) {
        i <<= 1;
        i |= (cond & 1);
        cond = cond >> 1;
    }
    if(i == num){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", Palindrobits(num));
    

    return 0;
}