#include <stdio.h>

void isMagicSquare(int *list, int size, int length)
{
   int lineSum = 0;
   int horizontal = 0;
   for (int i = 0; i < length; i++)
   {
      lineSum += list[i];
   }
   for (int i = 0; i < size; i++)
   {
      horizontal += list[i];
   }
   if (horizontal % lineSum == 0)
   {
      printf("true");
   }
   else
   {
      printf("false");
   }
}
void main()
{
   int length, size;
   scanf("%d", &length);
   size = length * length;
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   isMagicSquare(arr, size, length);
}