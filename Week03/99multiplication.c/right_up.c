
#include <stdio.h>

int main(void)
{
  int i, j;
  i = 1;
  while (i<=9) {
    j = 1;
    while(j <= i){
      printf("    ");
      j++;
    }
    j = i;
    while (j<= 9) {
      printf("%3d ", i*j);
      j++;
    }
    printf("\n");
    i++;
  }
  return 0;
}