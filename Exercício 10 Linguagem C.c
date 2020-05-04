#include <stdio.h>

int n1 = 0;
int n2 = 0;

int main() {
  printf("Digite dois numeros\n");
  scanf("%i", &n1);
  scanf("%i", &n2);

  n1 = (n1*n1)+(n2*n2);

  printf("A soma do quadrado dos valores é %i",n1);
}