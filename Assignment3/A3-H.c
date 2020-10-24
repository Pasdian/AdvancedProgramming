#include "stdio.h"

/*
DONE

low? high? sum = 55

*/

void printNumbers(int n) {

     for (int i = 1; i <= n; i++)
    {
        printf("[%d]", i);
        printf(" ");
    }

}

int main()
{
    int high;
    scanf("%d", &high);
    printNumbers(high);

    return 0;
}
