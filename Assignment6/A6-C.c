#include "stdio.h"

/* ArrayMode */

int computeMode(unsigned int arr[], int size){

    int maxValue = 0, maxCount = 0;
    

   for (int i = 0; i < size; ++i) {
      int count = 0;
      
      for (int j = 0; j < size; ++j) {
         if (arr[j] == arr[i])
         count++;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
   }

   return maxValue;


}


int main(){
    int size;
    scanf("%d",&size);
    unsigned int arr[size];    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",computeMode(arr, size));   
    return 0; 
}