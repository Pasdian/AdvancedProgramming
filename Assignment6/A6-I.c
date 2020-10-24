#include <stdio.h>

int computeMin(int *list, int size)
{
   int min = list[0];
   for (int i = 0; i < size; i++)
   {
      if (list[i] <= min)
      {
         min = list[i];
      }
   }
   return min;
}

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


void main()
{
   int size, min, max;
   scanf("%d", &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   min = computeMin(arr, size);
   max = computeMax(arr, size);
   printf("%d", max - min + 1);
}