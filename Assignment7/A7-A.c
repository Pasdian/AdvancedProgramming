#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    else
    {
        return gcd(a, b - a);
    }
}

typedef struct
{
    int numerator;
    int denominator;
} Fraction;

Fraction* SimplifyFraction(const Fraction* const fraction){
    int n = fraction -> numerator;
    int d = fraction->denominator;
    int greatestCommonDenominator = gcd(n, d);
    Fraction *simp = malloc(sizeof(Fraction));
    simp -> numerator = n / greatestCommonDenominator;
    simp -> denominator = d / greatestCommonDenominator;
    return simp;
}



int main()
{
    int n, d;
    scanf("%d\n%d", &n, &d);
    Fraction *fraction = malloc(sizeof(Fraction));
    fraction -> numerator = n;
    fraction -> denominator = d;
    Fraction *simp = SimplifyFraction(fraction);
    free(fraction);
    printf("%d\n%d\n", simp -> numerator, simp -> denominator);
    free(simp);
    return 0;
}