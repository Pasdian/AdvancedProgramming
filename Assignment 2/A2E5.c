#include<stdio.h> 
/* 
done
40 chars long

----------------------------------------
_-^-_-^-_-^-_-^-_-^-_-^-_-^-_-^-_-^-_-^-
1122334455667788990011223344556677889900
----------------------------------------

*/
 
int main()
{
    int i;
    int j = 0;
    char dash = '-';
    char draw[5] = "_-^-";


    for (i = 0; i < 40; ++i)
    { 
        printf("%c", dash);
    }

    printf("\n");

    for (i = 0; i < 10; ++i)
    { 
        printf("%s", draw);
    }
    printf("\n");

    for (i = 1; i < 21; ++i)
    { 
        j++;
        if (j == 10)
        {
            j = 0;
        }
        
        printf("%d%d", j,j);
    }

    printf("\n");

    for (i = 0; i < 40; ++i)
    { 
        printf("%c", dash);
    }
    
    return 0;
}