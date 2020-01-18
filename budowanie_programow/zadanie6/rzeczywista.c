#include <stdio.h>
#include <math.h>

int liczba;

void liczb_rzeczyw()
{
    printf("Podaj liczbę rzeczywistą a ja Ci podam jej pierwiastek kwadratowy: \n");
    scanf("%d", &liczba);   // pobiera liczbę na której będzie operować
    if(liczba < 0){printf("Do obliczenia pierwiastka potrzebna jest liczba dodatnia.\n");}
    else                    // jeśli liczba nie jest ujemna to wyliczy wynik
    {
                printf("Pierwiastkiem kwadratowym liczby %d jest %f .\n", liczba, sqrt(liczba));    //by zmniejszyć kod, oblicza wynik przy wypisaniu
    };
};