#include "stdio.h"

/* 
Done

En tu clase de matemáticas te enseñaron el algoritmo de Euclides (para calcular el  de dos números),
 y de tarea te pidieron que para un número , calculases , siendo esta función, la cantidad de números
  menores o iguales a , cuyo .

# Entrada

n1 integer




*/

void hopScotch(int n)
{
    int i = 1;
    int max = (3 * n) + i;
    while (i <= max)
    {
        if (i % 3 == 1)
        {
            printf("   %d\n", i);
        }
        else if (i % 3 == 0)
        {
            printf("     %d\n", i);
        }
        else
        {
            printf("%d", i);
        }
        i++;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    hopScotch(num);

    return 0;
}
