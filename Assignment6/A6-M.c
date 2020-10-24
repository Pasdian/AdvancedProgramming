#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void SieveOfEratosthenes(int n)
{
   bool primes[n + 1];
   memset(primes, true, sizeof(primes));

   for (int p = 2; p * p <= n; p++)
   {
      if (primes[p] == true)
      {
         for (int i = p * p; i <= n; i += p)
            primes[i] = false;
      }
   }

   for (int p = 2; p <= n; p++)
      if (primes[p])
         printf("%d ", p);
         printf("\n");
}

// Driver Program to test above function
int main()
{
   int num;
    scanf("%d", &num);
   SieveOfEratosthenes(num);
   return 0;
}