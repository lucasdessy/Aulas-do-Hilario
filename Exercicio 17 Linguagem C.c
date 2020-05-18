#include <stdio.h>
float n = 0;

int main(void) {
  printf("Digite o numero que deseja ver a tabuada\n");
    scanf("%f", &n);

  for(int x = 1;x <= 10;x++){
    printf("%0.2f x %i = %0.2f \n", n, x,n*x);
  }
}