#include "stdio.h"
#include "stdarg.h"

unsigned int pairsOfBits(unsigned int params, ...)
{
    if (params > 16)
    {
        params = 16;
    }

    unsigned int res = 0;
    unsigned int current = 0;
    va_list values;
    va_start(values, params);
    int pos = 0, i = 0, movements = 0;

    while (i < params)
    {
        current = va_arg(values, int);
        if (pos == 0)
        {
            current &= 3;
        }
        else if (pos == 1)
        {
            current >>= 2;
        }
        else if (pos == 2)
        {
            current >>= 4;
        }
        else
        {
            current >>= 6;
            pos = -1;
        }
        current <<= movements;
        res |= current;
        i++;
        pos++;
        movements = movements + 2;
    }
    va_end(values);
    return res;
}

int pairsOfBits_test_0()
{
    return pairsOfBits(0) == 0;
}

int pairsOfBits_test_3()
{
    return pairsOfBits(3, 1, 7, 47) == 37;
}

int pairsOfBits_test_18()
{
    return pairsOfBits(18, 65535, 65535, 65535, 65535, 65535,
                       65535, 65535, 65535, 65535, 65535,
                       65535, 65535, 65535, 65535, 65535,
                       65535, 0, 0) == 0xFFFFFFFF;
}

int main()
{
    printf("0 params Test: %d\n", pairsOfBits_test_0());
    printf("3 params Test: %d\n", pairsOfBits_test_3());
    printf("18 params Test: %d\n", pairsOfBits_test_18());
    return 0;
}