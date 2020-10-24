#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "A01375925_Test2_header.h"

Minutia *createMinutia(unsigned int x, unsigned int y, float angle, MinutiaType type)
{
    Minutia *minutia = malloc(sizeof(Minutia));
    minutia->x = x;
    minutia->y = y;
    minutia->angle = angle;
    minutia->type = type;
    return minutia;
}

MinutiaArray *createMinutiaArray(unsigned int lenght)
{
    MinutiaArray *minutiaArray = malloc(sizeof(MinutiaArray));
    minutiaArray->length = lenght;
    minutiaArray->minutiae = calloc(lenght, sizeof(Minutia));
    return minutiaArray;
}

void releaseMinutiaArray(MinutiaArray *minutiaArray)
{
    free(minutiaArray->minutiae);
    free(minutiaArray);
}

double computeDistance(const Minutia *const m1, const Minutia *const m2)
{
    int xSum = pow((m2->x - m1->x), 2);
    int ySum = pow((m2->y - m1->y), 2);
    double distance = sqrt(xSum + ySum);
    return distance;
}

Minutia *findCentroid(const MinutiaArray *const minutiaArray, double (*computeDistance)(const Minutia *const minutia1, const Minutia *const minutia2))
{
    double minDist = __DBL_MAX__;
    int index = 0;
    // Loop through minutias
    for (int i = 0; i < minutiaArray->length; i++)
    {
        double accumDist = 0;
        // Get the accumulated distance between the minutia "i" and the rest of minutias
        for (int j = 0; j < minutiaArray->length; j++)
        {
            accumDist += computeDistance(&minutiaArray->minutiae[i], &minutiaArray->minutiae[j]);
        }
        if (accumDist < minDist)
        {
            minDist = accumDist;
            index = i;
        }
    }
    return &minutiaArray->minutiae[index];
}

int testFindCentroid()
{
    MinutiaArray *minutiaArray = createMinutiaArray(10);

    Minutia *minutia0 = createMinutia(12, 15, 37, Unknown);
    minutiaArray->minutiae[0] = *minutia0;
    free(minutia0);

    Minutia *minutia1 = createMinutia(1, 1, 130, Bifurcation);
    minutiaArray->minutiae[1] = *minutia1;
    free(minutia1);

    Minutia *minutia2 = createMinutia(22, 48, 87, Bifurcation);
    minutiaArray->minutiae[2] = *minutia2;
    free(minutia2);

    Minutia *minutia3 = createMinutia(46, 37, 35, Bifurcation);
    minutiaArray->minutiae[3] = *minutia3;
    free(minutia3);

    Minutia *minutia4 = createMinutia(30, 17, 47, Unknown);
    minutiaArray->minutiae[4] = *minutia4;
    free(minutia4);

    Minutia *minutia5 = createMinutia(50, 10, 80, Unknown);
    minutiaArray->minutiae[5] = *minutia5;
    free(minutia5);

    Minutia *minutia6 = createMinutia(12, 50, 53, Bifurcation);
    minutiaArray->minutiae[6] = *minutia6;
    free(minutia6);

    Minutia *minutia7 = createMinutia(80, 50, 55, Unknown);
    minutiaArray->minutiae[7] = *minutia7;
    free(minutia7);

    Minutia *minutia8 = createMinutia(45, 70, 3, Bifurcation);
    minutiaArray->minutiae[8] = *minutia8;
    free(minutia8);

    Minutia *minutia9 = createMinutia(70, 70, 33, Bifurcation);
    minutiaArray->minutiae[9] = *minutia9;
    free(minutia9);

    Minutia *result = findCentroid(minutiaArray, computeDistance);
    printf("%u",result->x);
    printf("%u",result->y);


    if (&minutiaArray->minutiae[3] == result)
    {
        releaseMinutiaArray(minutiaArray);
        return 1;
    }
    else
    {
        releaseMinutiaArray(minutiaArray);
        return 0;
    }
}

int main()
{
    int testResult = testFindCentroid();
    printf("%d", testResult);
    return 0;
}