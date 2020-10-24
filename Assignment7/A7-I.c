#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y, width, height;
} Rectangle;

Rectangle *UniteRectangles(const Rectangle *const r1, const Rectangle *const r2)
{
    int x, y, width, height;
    int xMax1, xMax2, yMax1, yMax2;

    if (r1->x <= r2->x)
    {
        x = r1->x;
    }
    else
    {
        x = r2->x;
    }
    if (r1->y <= r2->y)
    {
        y = r1->y;
    }
    else
    {
        y = r2->y;
    }
    xMax1 = r1->x + r1->width;
    xMax2 = r2->x + r2->width;
    yMax1 = r1->y + r1->height;
    yMax2 = r2->y + r2->height;
    if (xMax1 <= xMax2)
    {
        width = xMax2 - x;
    }
    else
    {
        width = xMax1 - x;
    }
    if (yMax1 <= yMax2)
    {
        height = yMax2 - y;
    }
    else
    {
        height = yMax1 - y;
    }
    Rectangle *res = malloc(sizeof(Rectangle));
    res->x = x;
    res->y = y;
    res->width = width;
    res->height = height;
    return res;
}

void main()
{
    int x1, y1, w1, h1;
    int x2, y2, w2, h2;
    scanf("%d\n%d\n%d\n%d", &x1, &y1, &w1, &h1);
    scanf("%d\n%d\n%d\n%d", &x2, &y2, &w2, &h2);
    // Memory Allocation
    Rectangle *rec1 = malloc(sizeof(Rectangle));
    Rectangle *rec2 = malloc(sizeof(Rectangle));
    // Rectangle 1
    rec1->x = x1;
    rec1->y = y1;
    rec1->width = w1;
    rec1->height = h1;
    // Rectangle 2
    rec2->x = x2;
    rec2->y = y2;
    rec2->width = w2;
    rec2->height = h2;
    // Calculation
    Rectangle *res = UniteRectangles(rec1, rec2);
    // Free Memory
    free(rec1);
    free(rec2);
    printf("%d\n%d\n%d\n%d", res->x, res->y, res->width, res->height);
    free(res);
}