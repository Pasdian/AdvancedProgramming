#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y, width, height;
} Rectangle;

Rectangle *IntersectRectangles(const Rectangle *const r1, const Rectangle *const r2)
{
    int x, y, width, height;
    int xMax1, xMax2, yMax1, yMax2;

    if (r1->x >= r2->x)
    {
        x = r1->x;
    }
    else
    {
        x = r2->x;
    }
    if (r1->y >= r2->y)
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
        width = xMax1 - r2->x;
    }
    else
    {
        width = xMax2 - r1->x;
    }
    if (yMax1 <= yMax2)
    {
        height = yMax1 - r2->y;
    }
    else
    {
        height = yMax2 - r1->y;
    }
    Rectangle *result = malloc(sizeof(Rectangle));
    result->x = x;
    result->y = y;
    result->width = width;
    result->height = height;
    return result;
}

void main()
{
    int x1, y1, width1, height1;
    int x2, y2, width2, height2;
    scanf("%d\n%d\n%d\n%d", &x1, &y1, &width1, &height1);
    scanf("%d\n%d\n%d\n%d", &x2, &y2, &width2, &height2);
    Rectangle *r1 = malloc(sizeof(Rectangle));
    Rectangle *r2 = malloc(sizeof(Rectangle));
    r1->x = x1;
    r1->y = y1;
    r1->width = width1;
    r1->height = height1;
    r2->x = x2;
    r2->y = y2;
    r2->width = width2;
    r2->height = height2;
    Rectangle *res = IntersectRectangles(r1, r2);
    free(r1);
    free(r2);
    printf("%d\n%d\n%d\n%d", res->x, res->y, res->width, res->height);
    free(res);
}