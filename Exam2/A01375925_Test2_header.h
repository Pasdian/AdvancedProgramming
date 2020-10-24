typedef enum
{
    Ending,
    Bifurcation,
    Unknown
} MinutiaType;

typedef struct
{
    unsigned int x, y;
    float angle;
    MinutiaType type;
} Minutia;

typedef struct
{
    Minutia *minutiae;
    unsigned int length;
} MinutiaArray;

// Assign and create
Minutia *createMinutia(unsigned int x, unsigned int y, float angle, MinutiaType type);
MinutiaArray *createMinutiaArray(unsigned int lenght);
// Release memory
void releaseMinutiaArray(MinutiaArray *minutiaArray);
// Computations
double computeDistance(const Minutia *const minutia1, const Minutia *const minutia2);
Minutia *findCentroid(const MinutiaArray *const minutiaArray, double (*computeDistance)(const Minutia *const minutia1, const Minutia *const minutia2));
// Tests
int testFindCentroid();