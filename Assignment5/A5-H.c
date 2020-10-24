#include "stdio.h"

/*  */


int multipleSwaps(unsigned int num, unsigned int pos1, unsigned int pos2){
    unsigned int a = (num >> pos1) & 1;
    unsigned int b = (num >> pos2) & 1;
    unsigned int xor = a ^ b;
    xor = (xor << pos1) | (xor << pos2);
    unsigned int res  =  num ^ xor;
    return res;


}

int main()
{
    int num, p1, p2;
    scanf("%d\n", &num);
    scanf("%d\n", &p1);
    scanf("%d", &p2);
    printf("%d", multipleSwaps(num, p1, p2));
    

    return 0;
}