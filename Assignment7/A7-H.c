#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    int x, y, width, height;
} Rectangle;

typedef struct
{
    int x;
    int y;
} Point2D;

int RectangleContainsPoint(const Rectangle *const rec, const Point2D *const point)
{
    int rightEdge, absBotEdge;
    rightEdge = rec->x + rec->width;
    absBotEdge = rec->y + rec->height;
    if ((point->x <= rightEdge && point->x >= rec->x) && (point->y <= absBotEdge && point->y >= rec->y))
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
    int x, y, width, height, px, py;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &x, &y, &width, &height, &px, &py);
    Rectangle *rectangle = malloc(sizeof(Rectangle));
    Point2D *point = malloc(sizeof(Point2D));
    rectangle->x = x;
    rectangle->y = y;
    rectangle->width = width;
    rectangle->height = height;
    point->x = px;
    point->y = py;
    printf("%d", RectangleContainsPoint(rectangle, point));
    free(rectangle);
    free(point);
}
