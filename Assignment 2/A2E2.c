#include<stdio.h> 
/* 
done
2 times 1 = 2
2 times 2 = 4
2 times 3 = 6
2 times 4 = 8

*/

int main() {
    int i;

  for (i = 1; i < 5; ++i)
  {
      int var = i*2;
      printf("2 times %d = %d\n", i, var);
  }
  return 0;
}