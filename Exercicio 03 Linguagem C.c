#include <stdio.h>
float n1;
float n2;
float n3;
float n4;

int main(void) {
  printf("Digite quantidade de dias \n");
  scanf("%f" , &n1);

  printf("Digite quantidade de horas \n");
  scanf("%f" , &n2);

  printf("Digite quantidade de minutos \n");
  scanf("%f" , &n3);

  printf("Digite quantidade de segundos \n");
  scanf("%f" , &n4);

  n1 = (((n1*24)*60)*60);
  n2 = ((n2*60)*60);
  n3 = (n3*60);
  n4 = n1 + n2 +n3 + n4;
  printf("%f",n4);
}
