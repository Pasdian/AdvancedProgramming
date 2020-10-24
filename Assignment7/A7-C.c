#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Point3D
{
    int x;
    int y;
    int z;
} Point3D;

double euclidianDistance(const Point3D *const p1, const Point3D *const p2)
{
    double powX = pow(p1->x - p2->x, 2);
    double powY = pow(p1->y - p2->y, 2);
    double powZ = pow(p1->z - p2->z, 2);
    double res = sqrt(powX + powY + powZ);
    return res;
}

int main()
{
    int x1, y1, z1, x2, y2, z2;
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &x1, &y1, &z1, &x2, &y2, &z2);
    Point3D *p1 = malloc(sizeof(Point3D));
    Point3D *p2 = malloc(sizeof(Point3D));
    p1->x = x1;
    p1->y = y1;
    p1->z = z1;
    p2->x = x2;
    p2->y = y2;
    p2->z = z2;
    printf("%.2f", euclidianDistance(p1, p2));
    free(p1);
    free(p2);
    return 0;
}