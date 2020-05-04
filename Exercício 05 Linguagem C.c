#include <stdio.h>

float salario = 0;
float reajuste = 0;

int main() {
  printf("Digite seu salario\n");
  scanf("%f",&salario);
  reajuste = salario + (salario * 0.5);
  printf("O seu novo salario com o reajuste é %.2f",reajuste);
}