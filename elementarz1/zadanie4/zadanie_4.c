#include <stdio.h>
#include "silnia.h"

int main()
{
    printf("Podaj liczbę naturalną z której ma być obliczona silnia: ");
    scanf("%d", &powerto);
    putchar('\n');

    licz_silnia();

    printf("Silnią liczby %d jest %d \n", powerto, wynik);
}