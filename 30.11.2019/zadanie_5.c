#include <stdio.h>
#include <stdlib.h>

int tablica[5];

int main()
{
  printf("Wpisz 6 cyfr: \n");

  for(int i=0; i<6; i++)  //wczytanie
    {
    scanf("%d", &tablica[i]);
    };

  printf("Cyfry które wpisałeś: \n");
  for(int i=0; i<6; i++) //wypisanie
    {
    printf("%d \n", tablica[i]);
    };
}
