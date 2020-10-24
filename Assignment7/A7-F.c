#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
} Point2D;

double ComputeSlope(const Point2D *const point1, const Point2D *const point2)
{
    double numerator = point2->y - point1->y;
    double denominator = point2->x - point1->x;
    return numerator / denominator;
}

void main()
{
    int x1, y1, x2, y2;
    scanf("%d\n%d\n%d\n%d", &x1, &y1, &x2, &y2);
    Point2D *p1 = malloc(sizeof(Point2D));
    Point2D *p2 = malloc(sizeof(Point2D));
    p1->x = x1;
    p1->y = y1;
    p2->x = x2;
    p2->y = y2;
    printf("%.1f", ComputeSlope(p1, p2));
    free(p1);
    free(p2);
}