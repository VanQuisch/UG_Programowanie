#include <stdio.h>

int M;
int suma = 0;
int i = 1;
int n;

int main()
{
  printf("Podaj liczbe M: ");
  scanf("%d", &M);
  while(suma < M)
  {
    suma=suma+i;
    i++;
  }
  n=i-1;
  printf("Szukane n to: %d", n);
  return 0;
}
