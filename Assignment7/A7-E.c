#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Point2D;

Point2D *SwapAndNegate(const Point2D *const point)
{
    int x, y, temp;
    x = point->x;
    y = point->y;
    temp = x;
    x = y * -1;
    y = temp * -1;
    Point2D *result = malloc(sizeof(Point2D));
    result->x = x;
    result->y = y;
    return result;
}
void main()
{
    int x1, y1;
    scanf("%d\n%d", &x1, &y1);
    Point2D *p = malloc(sizeof(Point2D));
    p->x = x1;
    p->y = y1;
    Point2D *res = SwapAndNegate(p);
    free(p);
    printf("%d\n%d", res->x, res->y);
    free(res);
}