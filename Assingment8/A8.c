#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "A8.h"

Instance *createInstance(const int length)
{
    Instance *instance = (Instance *)malloc(sizeof(Instance));
    instance->features = malloc(length * sizeof(double));
    instance->featureTypes = malloc(length * sizeof(FeatureType));
    instance->length = length;

    return instance;
}

void freeInstance(Instance *instance)
{
    free(instance->features);
    free(instance->featureTypes);
    free(instance);
}

double computeEuclideanDissimilarity(const Instance *const instanceAPtr, const Instance *const instanceBPtr)
{

    if (instanceAPtr->length == 0 || instanceBPtr->length == 0)
    {
        return -1;
    }
    if (instanceAPtr->length != instanceBPtr->length)
    {
        return -2;
    }

    double sum = 0;

    for (int i = 0; i <= instanceAPtr->length - 1; i++)
    {
        // Numerical
        if (instanceAPtr->featureTypes[i] == 0 && instanceBPtr->featureTypes[i] == 0)
        {
            double aValue = instanceAPtr->features[i];
            double bValue = instanceBPtr->features[i];
            sum += pow(aValue - bValue, 2);
        }

        // Nominal
        else if (instanceAPtr->featureTypes[i] == 1 && instanceBPtr->featureTypes[i] == 1)
        {
            sum += instanceAPtr->features[i] != instanceBPtr->features[i] ? 1 : 0;
        }
        // When the instances are of different Type we return -3
        if (instanceAPtr->featureTypes[i] != instanceBPtr->featureTypes[i])
        {
            return -3;
        }
    }

    double dissimilarity = sqrt(sum);

    return dissimilarity;
}

Instance *findNearestNeighbor(const Instance *const instances,
                              const int length,
                              const Instance *const query,
                              double (*computeDissimilarity)(const Instance *const instanceAPtr, const Instance *const instanceBPtr))
{

    double leastDissimilar = 0;
    int index = 0;

    leastDissimilar = computeDissimilarity(&instances[0], query);
    // Tests
    if (leastDissimilar == -1 || leastDissimilar == -2 || leastDissimilar == -3)
    {
        return (int)leastDissimilar;
    }
    // Comparison and iteration
    for (int i = 1; i < length - 1; i++)
    {
        double iterDissimilarity = 0;
        iterDissimilarity += computeDissimilarity(&instances[i], query);

        if (iterDissimilarity == -1 || iterDissimilarity == -2 || iterDissimilarity == -3)
        {
            return (int)iterDissimilarity;
        }

        if (iterDissimilarity < leastDissimilar)
        {
            leastDissimilar = iterDissimilarity;
            index = i;
        }
    }
    return &instances[index];
}

// Test Functions
int testDissLength0()
{

    Instance *instanceA = createInstance(3);
    instanceA->features[0] = 2;
    instanceA->features[1] = 2;
    instanceA->features[2] = 2;
    instanceA->featureTypes[0] = 1;
    instanceA->featureTypes[1] = 1;
    instanceA->featureTypes[2] = 1;

    Instance *instanceB = createInstance(0);

    double res = computeEuclideanDissimilarity(instanceA, instanceB);

    freeInstance(instanceA);
    freeInstance(instanceB);

    return (res == -1) ? 1 : 0;
}

int testDissDifferentLengths()
{

    Instance *instanceA = createInstance(1);
    instanceA->features[0] = 2;
    instanceA->featureTypes[0] = 0;

    Instance *instanceB = createInstance(3);
    instanceB->features[0] = 2;
    instanceB->features[1] = 2;
    instanceB->features[2] = 2;
    instanceB->featureTypes[0] = 1;
    instanceB->featureTypes[1] = 0;
    instanceB->featureTypes[2] = 0;

    double res = computeEuclideanDissimilarity(instanceA, instanceB);

    freeInstance(instanceA);
    freeInstance(instanceB);

    return (res == -2) ? 1 : 0;
}

int testDissDifferentFT()
{

    Instance *instanceA = createInstance(5);
    instanceA->features[0] = 5;
    instanceA->features[1] = 4;
    instanceA->features[2] = 3;
    instanceA->features[3] = 2;
    instanceA->features[4] = 1;
    instanceA->featureTypes[0] = 1;
    instanceA->featureTypes[1] = 1;
    instanceA->featureTypes[2] = 1;
    instanceA->featureTypes[3] = 1;
    instanceA->featureTypes[4] = 1;

    Instance *instanceB = createInstance(5);
    instanceB->features[0] = 5;
    instanceB->features[1] = 4;
    instanceB->features[2] = 3;
    instanceB->features[3] = 2;
    instanceB->features[4] = 1;
    instanceB->featureTypes[0] = 1;
    instanceB->featureTypes[1] = 1;
    instanceB->featureTypes[2] = 1;
    instanceB->featureTypes[3] = 1;
    instanceB->featureTypes[4] = 0;

    double res = computeEuclideanDissimilarity(instanceA, instanceB);

    freeInstance(instanceA);
    freeInstance(instanceB);

    return (res == -3) ? 1 : 0;
}

int testDissimilarity()
{

    Instance *instanceA = createInstance(6);
    instanceA->features[0] = 3;
    instanceA->features[1] = 4; //Nominal
    instanceA->features[2] = 6;
    instanceA->features[3] = 7;//Nominal
    instanceA->features[4] = 8;
    instanceA->features[5] = 11;//Nominal
    instanceA->featureTypes[0] = 0;
    instanceA->featureTypes[1] = 1; 
    instanceA->featureTypes[2] = 0;
    instanceA->featureTypes[3] = 1;
    instanceA->featureTypes[4] = 0;
    instanceA->featureTypes[5] = 1;

    Instance *instanceB = createInstance(6);
    instanceB->features[0] = 4;
    instanceB->features[1] = 6;//Nominal
    instanceB->features[2] = 5;
    instanceB->features[3] = 3;//Nominal
    instanceB->features[4] = 2;
    instanceB->features[5] = 16;//Nominal
    instanceB->featureTypes[0] = 0;
    instanceB->featureTypes[1] = 1;
    instanceB->featureTypes[2] = 0;
    instanceB->featureTypes[3] = 1;
    instanceB->featureTypes[4] = 0;
    instanceB->featureTypes[5] = 1;

    double res = computeEuclideanDissimilarity(instanceA, instanceB);

    freeInstance(instanceA);
    freeInstance(instanceB);

    return (res - 6.4031) < 0.0001 ? 1 : 0;
}

int testFindNearestNeighbor()
{
    Instance *instanceA = createInstance(3);
    instanceA->features[0] = 1;
    instanceA->features[1] = 2;
    instanceA->features[2] = 3;
    instanceA->featureTypes[0] = 1;
    instanceA->featureTypes[1] = 0;
    instanceA->featureTypes[2] = 1;

    Instance *instanceB = createInstance(3);
    instanceB->features[0] = 4;
    instanceB->features[1] = 5;
    instanceB->features[2] = 6;
    instanceB->featureTypes[0] = 0;
    instanceB->featureTypes[1] = 1;
    instanceB->featureTypes[2] = 0;

    Instance *instancesArr = (Instance *)malloc(2 * sizeof(Instance));
    instancesArr[0] = *instanceA;
    instancesArr[1] = *instanceB;

    Instance *query = createInstance(3);
    query->features[0] = 1;
    query->features[1] = 2;
    query->features[2] = 3;
    query->featureTypes[0] = 1;
    query->featureTypes[1] = 0;
    query->featureTypes[2] = 1;

    int res = findNearestNeighbor(instancesArr, 2, query, computeEuclideanDissimilarity) == &instancesArr[0];

    freeInstance(instanceA);
    freeInstance(instanceB);
    freeInstance(query);
    free(instancesArr);

    return (res);
}

int main()
{
    printf("testDissLength0 = %d\n", testDissLength0());
    printf("testDissDifferentLengths = %d\n", testDissDifferentLengths());
    printf("testDissDifferentFT = %d\n", testDissDifferentFT());
    printf("testDissimilarity = %d\n", testDissimilarity());
    printf("testFindNearestNeighbor = %d\n", testFindNearestNeighbor());
    return 0;
}