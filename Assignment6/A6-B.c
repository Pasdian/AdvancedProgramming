#include "stdio.h"
#define SIZE 10

int main(void) {
    unsigned int h[SIZE] = {0};
    scanf("%u%u%u%u%u%u%u%u%u%u", &h[0], &h[1], &h[2], &h[3], &h[4], &h[5], &h[6], &h[7], &h[8], &h[9]);
    float acum=0.0;
    for(int i=0;i<SIZE;i++){
        acum+=h[i];
    }
    printf("%.1f",acum/SIZE);
    return 0;
}