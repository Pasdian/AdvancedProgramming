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

int compareBits(int a,int b){
    int bitsA = countOnes(a);
    int bitsB = countOnes(b);

    if(bitsA < bitsB){
        return -1;
    }else if(bitsA > bitsB){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int a, b;
    scanf("%d\n", &a);
    scanf("%d", &b);

    printf("%d", compareBits(a, b));
    

    return 0;
}