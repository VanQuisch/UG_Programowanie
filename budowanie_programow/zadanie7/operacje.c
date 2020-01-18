#include <math.h>

double liczba = 0;

void liczb_rzeczyw()    
{
    if(liczba < 0){printf("Do obliczenia pierwiastka potrzebna jest liczba dodatnia.\n");}
    else        // pilnuje by nie pierwiastkować liczb ujemnych
    {
                printf("Pierwiastkiem kwadratowym liczby %f jest %f .\n", liczba, sqrt(liczba));    // wylicza wynik przy wypisywaniu
    };
};

void odwrotnosc()
{
    if(liczba == 0){printf("Program nie powinien obliczać odwrotności liczby 0.\n");}
    else        // pilnuje by nie obliczać odwrotności zera
    {
    float odwrot = (1/liczba);  // odwraca podaną liczbę wstawiając ją w mianownik
    printf("Odwrotnością liczby %f jest: %.5f \n", liczba, odwrot);
    };
};