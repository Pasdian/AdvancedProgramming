#include "stdio.h"

/*  */


int countOnes(int num){
    int ones = 0;

    while(num != 0){
        num &= (num -1);
        ones ++;
    }
    return ones;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", countOnes(num));
    

    return 0;
}