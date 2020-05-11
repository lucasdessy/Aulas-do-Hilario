#include <stdio.h>
int n1 = 0;
int n2 = 0;
int main(void) {
  printf("Digite dois numeros\n");
  scanf("%i", &n1);
  scanf("%i", &n2);

  if (n1 < n2){
    printf("%i %i",n1,n2);
  }else if(n2 < n1){
    printf("%i %i",n2,n1);
  }else{
    printf("%i",n1);
  }
}