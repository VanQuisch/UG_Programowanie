#include <stdio.h>
//#include <time.h>

int dzien, miesiac, rok;

int wiek, wiek_sek = 0;
int year, leap;

//time_t start_t, end_t;
//double diff_t;

void zliczanie()           // kod z możliwością podłączenia biblioteki time.h
{
    year = rok++;   // jeden rok jest niepełny

    for(int i=year; i<=2020; i++)   //liczy sekundy od roku urodzenia do obecnego
    {
        leap = year%4==0 && year%100!=0 || year%400 == 0;           // ta linijka jest z zadania więc nie mogę jej zmieniać a wywala warninga
        if(leap == 0){wiek_sek = wiek_sek + 365 * 24 * 60 * 60;}    //jeśli rok nie jest przestępny
        else{wiek_sek = wiek_sek + 366 * 24 * 60 * 60;};            //jeśli rok jest przestępny
    };

    for(int i=1; i<=miesiac; i++)
    {
        if(i == 2){wiek_sek = wiek_sek + 29 * 24 * 60 * 60;}        // jeśli przestępny to 29 dni
        else if(i%2!=0){wiek_sek = wiek_sek + 31 * 24 * 60 * 60;}   // jeśli miesiąc ma 31 dni
        else{wiek_sek = wiek_sek + 30 * 24 * 60 * 60;};             // jeśli miesiąc ma 30 dni
    };

    for(int i=1; i<=dzien; i++)
    {
        wiek_sek = wiek_sek + 24 * 60 * 60;                         // jeśli przestępny to 29 dni
    };
};