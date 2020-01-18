#include <stdio.h>

int wiek, wiek_sek = 0;
int year, leap;

void zliczanie()
{
    year = 2020 - wiek;             //wylicza rok urodzenia
    for(int i=year; i<=2020; i++)   //liczy sekundy od roku urodzenia do obecnego
    {
        leap = year%4==0 && year%100!=0 || year%400 == 0;           // ta linijka jest z zadania więc nie mogę jej zmieniać a wywala warninga
        if(leap == 0){wiek_sek = wiek_sek + 365 * 24 * 60 * 60;}    //jeśli rok nie jest przestępny
        else{wiek_sek = wiek_sek + 366 * 24 * 60 * 60;};            //jeśli rok jest przestępny
    };
};