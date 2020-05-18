#include <stdio.h>
int   p = 0;
float v = 0;
float q = 0;
int  cont = 0;
float total = 0;
int main(void) {
  printf("||------------------------------------------------||\n");
  printf("||    Produtos    ||    Codigo    ||    Preço     ||\n");
  printf("||------------------------------------------------||\n");
  printf("|| Cachorro Quente||     100      ||    1,20      ||\n");
  printf("|| Bauru Simples  ||     101      ||    1,30      ||\n");
  printf("|| Bauru c/ ovo   ||     102      ||    1,50      ||\n");
  printf("|| Hamburguer     ||     103      ||    1,20      ||\n");
  printf("|| ChesBurguer    ||     104      ||    1,70      ||\n");
  printf("|| Suco           ||     105      ||    2,20      ||\n");
  printf("|| Refrigerante   ||     106      ||    1,00      ||\n");
  printf("||------------------------------------------------||\n");
  do {
    printf("Digite o codigo do pedido\n");
    scanf("%i", &p);

    printf("Digite a quantidade\n");
    scanf("%f", &q);

    switch(p){
      case 100:
        v = 1.2;
      break;  
      case 101:
        v = 1.3;
      break; 
      case 102:
        v = 1.5;
      break; 
      case 103:
        v = 1.2;
      break;  
      case 104:
        v = 1.7;
      break; 
      case 105:
        v = 2.2;
      break; 
      case 106:
        v = 1;
      break; 
    }

    total = total + (v*q);

    printf("Deseja continuar 1/Sim 0/Nao \n");
    scanf("%i", &cont);
  }while(cont == 1);

  printf("Valor a ser pago é %0.2f",total);
}
