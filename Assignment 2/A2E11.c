#include <stdio.h>
/* 
TO-DO

   /\       /\       /\       /\
  /  \     /  \     /  \     /  \
 /    \   /    \   /    \   /    \
+------+ +------+ +------+ +------+
|      | |      | |      | |      |
|      | |      | |      | |      |
+------+ +------+ +------+ +------+
| Viva | | Viva | | Viva | | Viva |
|Mexico| |Mexico| |Mexico| |Mexico|
+------+ +------+ +------+ +------+
|      | |      | |      | |      |
|      | |      | |      | |      |
+------+ +------+ +------+ +------+
   /\       /\       /\       /\
  /  \     /  \     /  \     /  \
 /    \   /    \   /    \   /    \


*/

void top(int select)
{
    switch (select)
    {
    case 1:
        printf("   /\\   ");
        break;
    case 2:
        printf("  /  \\  ");
        break;
    case 3:
        printf(" /    \\ ");
        break;
    default:
        break;
    }
}
void square(int select)
{
    switch (select)
    {
    case 1:
        printf("+------+");
        break;
    case 2:
        printf("|      |");
        break;
    case 3:
        printf("|      |");
        break;
    default:
        printf("+------+");
        break;
    }
}

void mex(int select)
{
    switch (select)
    {
    case 1:
        printf("| Viva |");
        break;
    case 2:
        printf("|Mexico|");
        break;
    default:
        break;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 16; i++)
    {
        for (int k = 0; k < n; k++)
        {
            switch (i)
            {
            case 1:
                top(1);
                break;
            case 2:
                top(2);
                break;
            case 3:
                top(3);
                break;
            case 4:
                square(1);
                break;
            case 5:
                square(2);
                break;
            case 6:
                square(3);
                break;
            case 7:
                square(4);
                break;
            case 8:
                mex(1);
                break;
            case 9:
                mex(2);
                break;
            case 10:
                square(1);
                break;
            case 11:
                square(2);
                break;
            case 12:
                square(3);
                break;
            case 13:
                square(4);
                break;
            case 14:
                top(1);
                break;
            case 15:
                top(2);
                break;
            case 16:
                top(3);
                break;

            default:
                break;
            }
            printf(" ");
        }
        printf("\n");
    }
}
