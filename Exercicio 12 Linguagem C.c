#include <stdio.h>
int idade = 0;
int main(void) {
  printf("Digite sua idade\n");
  scanf("%i", &idade);

  if(idade <= 4){
    printf("Voce nao esta em nenhuma categoria");

  }  else if (idade <= 7){
    printf("Voce é da categoria Infantil A");

  }else if(idade <= 11){
    printf("Voce é da categoria Infantil B");

  }else if(idade <= 13){
    printf("Voce é da categoria Juvenil A");

  }else if(idade <= 17){
    printf("Voce é da categoria Juvenil B");

  }else if(idade >= 18){
    printf("Voce é da categoria Adulto");
  }
}