#include <stdio.h>

int main() 
{
  int M, n;
  int suma = 1;
  int i = 0;

  printf("Podaj liczbe M: ");
  scanf("%d, \n", &M);
  while (suma < M) 
  {
     suma += i;
     i++;
  }
  n=i+1;
  printf("Szukane n to: %d\n", n);

  return 0;
}