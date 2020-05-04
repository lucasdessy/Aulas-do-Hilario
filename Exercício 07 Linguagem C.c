#include <stdio.h>

float km = 0;
float dia = 0;
float preco = 0;

int main() {
  printf("Digite a quantidade de km percorrido\n");
  scanf("%f",&km);

  printf("Digite a quantidade de dias alugado\n");
  scanf("%f",&dia);

  preco = (60 * dia) + (0.15 * km);


  printf("O preço a pagar é %.2f",preco);
}