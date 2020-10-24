#include "stdio.h"
#include <stdbool.h>

/* 
Done

If one of the integers is the midpoint

# Entrada

n1 integer
n2 integer
n3 integer

4,6,8 true

3,1,3 false


*/

bool hasMidPoint(int a, int b, int c)
{

    if (a == b || a == c || b == c)
    {
        printf("false");
        return false;
    }
    int top, bot;

    // A is top and define bot
    if (a > b && a > c)
    {
        top = a;
        if (b > c)
        {
            bot = c;
        }
        else
        {
            bot = b;
        }
    }
    // b is top
    else if (b > a && b > c)
    {
        top = b;
        if (a > c)
        {
            bot = c;
        }
        else
        {
            bot = a;
        }
    }
    // c is top
    else
    {
        top = c;
        if (b > a)
        {
            bot = a;
        }
        else
        {
            bot = b;
        }
    }
    if ((top - bot) % 2 != 0)
    {
        printf("false");
        return false;
    }

    int distance = (top - bot) / 2;

    int midPoint  = bot + distance;

    if (a == midPoint || b == midPoint || c == midPoint )
    {
        printf("true");
        return true;
    }
    
}

int main()
{
    int a, b, c;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    hasMidPoint(a, b, c);

    return 0;
}
