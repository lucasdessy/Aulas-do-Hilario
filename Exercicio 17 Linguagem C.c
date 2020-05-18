#include <stdio.h>
float n = 0;
float t = 0;
int x = 0;
int main(void) {
  printf("Digite o numero que deseja ver a tabuada\n");
    scanf("%f", &n);

  for(x = 1;x <= 10;x++){
    t = 0;
    t = n * x;
    printf("%0.2f x %i = %0.2f \n", n, x, t);
    
  }
}