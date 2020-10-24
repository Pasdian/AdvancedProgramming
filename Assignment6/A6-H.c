#include <stdio.h>

void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

void bubbleSort(int arr[], int size)
{
   int i, j;
   for (i = 0; i < size - 1; i++)
      for (j = 0; j < size - i - 1; j++)
         if (arr[j] > arr[j + 1])
            swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
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
   bubbleSort(arr, size);
   printArray(arr, size);
   return 0;
}