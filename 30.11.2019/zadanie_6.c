#include <stdio.h>
#include <stdlib.h>

int tablica[5];
int max, min;

int main()
{
  printf("Wpisz 6 cyfr: \n");

  for(int i=1; i<7; i++)  //wczytanie
    {
    scanf("%d", &tablica[i]);
    };

  if(tablica[1]>tablica[2]){max=tablica[1];}; //szukanie najwięksej liczby
  if(max<tablica[3]){max=tablica[3];};
  if(max<tablica[4]){max=tablica[4];};
  if(max<tablica[5]){max=tablica[5];};
  printf("Największa cyfra: %d \n", max);

  if(tablica[1]>tablica[2]){min=tablica[1];}; //szukanie najmniejszej liczby
  if(min>tablica[3]){min=tablica[3];};
  if(min>tablica[4]){min=tablica[4];};
  if(min>tablica[5]){min=tablica[5];};
  printf("Najmniejsza cyfra: %d \n", min);
}