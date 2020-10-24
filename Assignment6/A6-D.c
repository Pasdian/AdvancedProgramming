#include "stdio.h"

/* ArrayMax
Create a program to read a variable number of elements, 
store them in the array a, passes a to the function computeMax which 
computes the maximun number iterating over the array, and then, the
 program prints the result of computeMax.
 */

int computeMax(int *list, int size)
{
   int max = list[0];
   for (int i = 0; i < size; i++)
   {
      if (list[i] >= max)
      {
         max = list[i];
      }
   }
   return max;
}

int main()
{
   int size;
   scanf("%d", &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("%d", computeMax(arr, size));
   return 0;
}