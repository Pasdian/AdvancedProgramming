#include <stdio.h>

int priceIsRight(int *list, int size, int price)
{
   int flag = -1;
   int n = 0;
   while (n < size)
   {
      if (list[n] <= price)
      {
         if (flag == -1 || (price - flag) > (price - list[n]))
         {
            flag = list[n];
         }
      }
      n++;
   }
   return flag;
}

void main()
{
   int price, size;
   scanf("%d\n%d", &price, &size);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("%d", priceIsRight(arr, size, price));
}