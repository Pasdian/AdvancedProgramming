#include "stdio.h"

/* Median

 */

void arraySort(int *array, int size)
{
   int i = 0, j = 0, temp = 0;
   for (i = 0; i < size; i++)
   {
      for (j = 0; j < size - 1; j++)
      {
         if (array[j] > array[j + 1])
         {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
         }
      }
   }
}

float findMedian(int array[], int size)
{
   float median = 0;
   if (size % 2 == 0)
      median = (array[(size - 1) / 2] + array[size / 2]) / 2.0;
   else
      median = array[size / 2];

   return median;
}

int main()
{
   int size;
   float median;
   scanf("%d", &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   arraySort(arr, size);
   median = findMedian(arr, size);
   printf("%.1f", median);
   return 0;
}