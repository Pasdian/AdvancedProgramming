#include "stdio.h"

/* 
Done

En tu clase de matemáticas te enseñaron el algoritmo de Euclides (para calcular el  de dos números),
 y de tarea te pidieron que para un número , calculases , siendo esta función, la cantidad de números
  menores o iguales a , cuyo .

# Entrada

n1 integer




*/

int gcd(int a, int b)
{
    int temp, gcd;
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        gcd = a;
        return gcd;
    }
}

int gcdOnes(int n)
{
    if (n > 1000000 || n <= 0)
    {
        return 0;
    }
    int ones = 0;
    for (int i = 1; i <= n; i++)
    {
        if (gcd(n, i) == 1)
        {
            ones++;
        }
    }
    return ones;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", gcdOnes(num));

    return 0;
}
