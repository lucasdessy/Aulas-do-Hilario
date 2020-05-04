#include <stdio.h>

float temp = 0;
float c = 0;

int main() {
  printf("Digite a temperatura em fahrenheit\n");
  scanf("%f",&temp);

  c = ((temp - 32)/9)*5;

  printf("O valor em celsius é %.2f",c);
}