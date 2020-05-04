#include <stdio.h>
int n1;
int n2;
int n3;

int main(void) {
  n1 = 1;
  n2 = 2;
  printf("n1 = %i  n2 = %i \n", n1,n2);

  n3 = n1;
  n1 = n2;
  n2 = n3;
  printf("n1 = %i  n2 = %i", n1,n2);
}