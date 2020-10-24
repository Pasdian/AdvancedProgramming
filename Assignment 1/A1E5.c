#include<stdio.h> 
/* 
Program to print:

//////////////////////
|| Victory is mine! ||
\\\\\\\\\\\\\\\\\\\\\\
|| Victory is mine! ||
\\\\\\\\\\\\\\\\\\\\\\
|| Victory is mine! ||
\\\\\\\\\\\\\\\\\\\\\\
|| Victory is mine! ||
\\\\\\\\\\\\\\\\\\\\\\
|| Victory is mine! ||
\\\\\\\\\\\\\\\\\\\\\\

*/

int main() {
    int i;

    printf("//////////////////////\n");
    for (i = 0; i < 5; i++)
    {
        victory();
        bSlash();

    }
    
    return 0;
}

int victory() {
    
    printf("|| Victory is mine! ||\n");
    return 0;
}

int bSlash(){

    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
    return 0;

}