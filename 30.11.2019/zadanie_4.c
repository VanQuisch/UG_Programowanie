#include <stdio.h>
#include <stdlib.h>

int koniec, wynik;

void wpisz_liczbe()
{
    printf("Wpisz liczbe calkowita większą od 0: ");
    scanf("%d", &koniec);
}

int main()
{
    wpisz_liczbe();

    while(koniec<1)
    {
        printf("Wpisałeś niepoprawną liczbę.\n");
        wpisz_liczbe();
    };

    for(int i=0; i<=koniec; i++)
    {
     wynik+=i;
    }

    printf("Wynik to %d \n", wynik);
}
