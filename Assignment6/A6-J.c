#include <stdio.h>

int countInRange(int *list, int size, int min, int max)
{
   int count = 0;
   for (int i = 0; i < size; i++)
   {
      if (list[i] >= min && max >= list[i])
      {
         count++;
      }
   }
   return count;
}

void main()
{
   int size, min, max;
   scanf("%d\n%d\n%d", &min, &max, &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("%d", countInRange(arr, size, min, max));
}