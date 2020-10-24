#include<stdio.h> 
/* 
done
359
9874
5687941   

359
874
941

*/
 
int main()
{
    int number, lastThree;
 
    scanf("%d", &number);
    lastThree = number % 1000;
    printf("%d", lastThree);
    return 0;
}