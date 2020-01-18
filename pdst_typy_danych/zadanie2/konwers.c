#include <stdio.h>

char n;

void konwersja()
{
    //for(;;)
    //{   
        printf("Podaj liczbę a algorytm poszuka i wypisze odpowiadający znak w ASCII: ");
        scanf("%hhd, \n",&n);   // podaną liczbę zapisuje do char który odbierze to jako zapisanie danego znaku
        printf("Kod %d ma znak: %c \n",n,n);
    // };
};