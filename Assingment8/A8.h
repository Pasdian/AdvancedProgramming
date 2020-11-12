typedef enum
{
    numerical,
    nominal
} FeatureType;

typedef struct
{
    double *features;
    FeatureType *featureTypes;
    int length;
} Instance;

double computeEuclideanDissimilarity(const Instance *const instanceAPtr, const Instance *const instanceBPtr);

Instance *findNearestNeighbor(const Instance *const instance,
                              const int length,
                              const Instance *const query,
                              double (*dissimilarityFunction)(const Instance *const instanceOne, const Instance *const instanceTwo));

int testDissLength0();

int testDissDifferentLengths();

int testDissDifferentFT();

int testDissimilarity();

int testFindNearestNeighbor();
