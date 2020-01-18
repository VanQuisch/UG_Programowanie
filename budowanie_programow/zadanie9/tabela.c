#include <stdio.h>
#include <math.h>

double liczba_pocz, liczba_konc, skok;

void pobranie_danych()
{
    printf("Wpisz od której liczby zaczynamy: ");
    scanf("%lf", &liczba_pocz);     // pobiera liczbę od której zaczyna obliczenia
    printf("Wpisz na której liczbie ma się zakończyć liczenie: ");
    scanf("%lf", &liczba_konc);     // pobiera liczbę na której kończy obliczenia
    printf("O ile ma być zwiększana wartość: ");
    scanf("%lf", &skok);            // pobiera liczbę o którą inkrementuje liczbę początkową
};

void pierwiastek()
{
    if(liczba_pocz < 0 || liczba_konc < 0){printf("Do obliczenia pierwiastka potrzebna jest liczba dodatnia.\n");}
    else        // pilnuje by podana wcześniej wartość nie była ujemna
    {
        printf("----------------------------\n");
        printf("|    n   | pierwiastek z n |\n");
        printf("----------------------------\n");           // wyrysowuje górną część tabelki
        for(double i=liczba_pocz; i<=liczba_konc; i+=skok)
        {
        printf("| %.4f |     %.4f      |\n", i, sqrt(i));   // wyrysowuje zawaryość tabelki
        };
        printf("----------------------------\n");           // wyrysowuje zakończenie tabelki
    };
};