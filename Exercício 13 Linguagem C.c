#include <stdio.h>

float n1 = 0;
float n2 = 0;
float tAula = 0;
float falta = 0;
int main(void) {
  printf("Digite suas duas notas");
  scanf("%f", &n1);
  scanf("%f", &n2);

  printf("Digite o total de aulas");
  scanf("%f", &tAula);

  printf("Digite o total de aulas");
  scanf("%f", &falta);

  falta = (tAula - falta);

  if (((n1+n2)/2 >= 7) && ((falta)*100/tAula) >= 75){
    printf("Aprovado");
  }else{
    printf("Reprovado");
  }
}