#include <stdio.h>

float preco = 0;
float kml = 0;
float kmc = 0;
float dinheiro = 0;
float litros = 0;

int main() {
  printf("Digite o preço do combustivel/reais\n");
  scanf("%f",&preco);

  printf("Digite o desempenho do carro km/l\n");
  scanf("%f",&kml);

  printf("Digite a distancia entre duas cidades Km\n");
  scanf("%f",&kmc);

  litros = kmc/kml;
  dinheiro = litros*preco; 


  printf("Gastara %.2f reais e consumira %.2f litros",dinheiro , litros);
}