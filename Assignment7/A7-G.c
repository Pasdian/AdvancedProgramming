
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

int AreCollinear(const Point2D *const point1, const Point2D *const point2, const Point2D *const point3)
{
    int slope1, slope2, slope3;
    slope1 = round(ComputeSlope(point1, point2));
    slope2 = round(ComputeSlope(point2, point3));
    slope3 = round(ComputeSlope(point1, point3));
    if (slope1 == slope2 && slope2 == slope3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    int x1, y1, x2, y2, x3, y3;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &x1, &y1, &x2, &y2, &x3, &y3);
    Point2D *p1 = malloc(sizeof(Point2D));
    Point2D *p2 = malloc(sizeof(Point2D));
    Point2D *p3 = malloc(sizeof(Point2D));
    p1->x = x1;
    p1->y = y1;
    p2->x = x2;
    p2->y = y2;
    p3->x = x3;
    p3->y = y3;
    printf("%d", AreCollinear(p1, p2, p3));
    free(p1);
    free(p2);
    free(p3);
}