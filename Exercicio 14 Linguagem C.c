#include <stdio.h>

int n1 = 0;
int cont = 0;

int main(void) {
  printf("Digite numero para realizar a tabuada\n");
  scanf("%i",&n1);

  while(cont <= 10){
    printf("%i x %i = %i\n",cont,n1,n1*cont);
    cont += 1;
  }
  
}