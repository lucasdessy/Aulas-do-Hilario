#include <stdio.h>

int a;

int main(void) {
  printf("Digite um numero inteiro\n");
  scanf("%i",&a);

  if(a % 2 == 0){
    printf("%i é par",a);
  }else{
    printf("%i é impar",a); 
  }

}