#include <stdio.h>
int n = 1;
int t;
int main(void) {
  while (n != 0){
    printf("Digite um numero\n");
    scanf("%i", &n);
    t = t + n;
  }
  printf("A soma dos numeros digitados é %i",t);
}
