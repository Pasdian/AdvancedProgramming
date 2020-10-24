#include <stdio.h>

void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

void selectionSort(int arr[], int size)
{
   int i, j, min_idx;
   for (i = 0; i < size - 1; i++)
   {
      min_idx = i;
      for (j = i + 1; j < size; j++)
         if (arr[j] < arr[min_idx])
            min_idx = j;
      swap(&arr[min_idx], &arr[i]);
   }
}

int searchValue(int list[], int left, int right, int x)
{
   if (right >= left)
   {
      int mid = left + (right - left) / 2;
      if (list[mid] == x)
         return mid;
      if (list[mid] > x)
         return searchValue(list, left, mid - 1, x);
      return searchValue(list, mid + 1, right, x);
   }
   return -1;
}
int main()
{
   int size, value;
   scanf("%d\n%d", &size, &value);
   int arr[size];
   for (int i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }
   selectionSort(arr, size);
   printf("%d", searchValue(arr, 0, size - 1, value));
   return 0;
}