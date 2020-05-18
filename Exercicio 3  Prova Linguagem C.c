#include <stdio.h>

int n[10];
int p = 0;
int i = 0;

int main() {
  printf("Digite 10 numeros \n");
  for(int x=0;x<10;x++){
  scanf("%i",&n[x]);

    if(n[x] % 2 == 0){
      p++;    
    }else{
      i++;
    }

  }
  printf("--------------------------------\n");
  for(int x=0;x<10;x++){
    printf("%i, ",n[x]);
  }
  printf("\n%i sao pares \n",p);
  printf("%i sao impares \n",i);
} 