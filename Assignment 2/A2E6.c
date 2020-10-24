#include<stdio.h> 
/* 
done

000111222333444555666777888999
000111222333444555666777888999
000111222333444555666777888999

*/
 
int main()
{
    int i;
    int j;


    for (i = 0; i < 3; ++i)
    { 
        for (j = 0; j < 10; j++)
        {
            printf("%d%d%d", j, j, j);
        }
        printf("\n");
        
    }
    
    return 0;
}