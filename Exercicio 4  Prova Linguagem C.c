#include <stdio.h>

int n[20];
int p = 0;
float m = 0;


int main(){
  printf("Digite 20 numeros \n");
  for(int x=0;x<20;x++){
    
    printf("%iº numero: ",x+1);
    scanf("%i",&n[x]);

    if(n[x] % 2 == 0){
      p++;
      m = m + n[x];    
    }

  }

  printf("--------------------------------\n");

  for(int x=0;x<20;x++){
    printf("%i ",n[x]);
  }
  if(m!=0){
    m=m/p;
  }
  printf("\nA media dos numeros pares é %0.2f",m);
  printf("\n%i numeros sao pares \n",p);
  
} 
