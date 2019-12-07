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

  printf("Liczby dodatnie to: \n");

  for(int i=0; i<6; i++)    //skanownie tablicy iwypisywanie
  {
    if(tablica[i]%2==0){printf("%d\n", tablica[i]);};
  };
}
