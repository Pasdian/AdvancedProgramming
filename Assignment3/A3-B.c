#include "stdio.h"

/* 
Done

5
Mexico

MexicoMexicoMexicoMexicoMexico


*/

void printStrings(int x, char word[20])
{
    for (int i = 0; i < x; i++)
    {
        printf("%s",word);
    }
    
}

int main()
{
    int number;
    scanf("%d\n", &number);
    char str[20];
    scanf("%[^\n]%*c", str);
    printStrings(number, str);
    

    return 0;
}
