#include <stdio.h>

char t1[40];
char t2[40];
char t3[15];

int main(void) {
  printf("Digite seu nome\n");
  scanf("%s",t1);

  printf("Digite seu endereco\n");
  scanf("%s",t2);

  printf("Digite seu telefone\n");
  scanf("%s",t3);

  printf("Nome    : %s\n",t1);
  printf("Endereco: %s\n",t2);
  printf("Telefone: %s\n",t3);
  
}