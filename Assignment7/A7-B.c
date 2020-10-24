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

Fraction *SimplifyFraction(const Fraction *const fraction)
{
    int n = fraction->numerator;
    int d = fraction->denominator;
    int greatestCommonDenominator = gcd(n, d);
    Fraction *simp = malloc(sizeof(Fraction));
    simp->numerator = n / greatestCommonDenominator;
    simp->denominator = d / greatestCommonDenominator;
    return simp;
}

Fraction *SumFraction(const Fraction *const f1, const Fraction *const f2)
{
    int n1 = f1->numerator;
    int d1 = f1->denominator;
    int n2 = f2->numerator;
    int d2 = f2->denominator;
    Fraction *sum = malloc(sizeof(Fraction));
    sum->numerator = (n1 * d2) + (d1 * n2);
    sum->denominator = d1 * d2;
    Fraction *sumSimp = SimplifyFraction(sum);
    return sumSimp;
}

int main()
{
    int n1,d1,n2,d2;
    scanf("%d\n%d\n%d\n%d",&n1,&d1,&n2,&d2);
    Fraction *f1 = malloc(sizeof(Fraction));
    Fraction *f2 = malloc(sizeof(Fraction));
    f1 -> numerator = n1;
    f1 -> denominator = d1;
    f2 -> numerator = n2;
    f2 -> denominator = d2;
    Fraction *res = SumFraction(f1,f2);
    free(f1);
    free(f2);
    printf("%d\n%d\n",res -> numerator, res -> denominator);
    free(res);
    return 0;
}