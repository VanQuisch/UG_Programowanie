#include <stdio.h>

void euclid()
{
    //int szukana_liczba_perfekcyjna;     // by nie dzielić zera
    //int dzielimy_przez;     // przez tą liczbę dzielimy domniemaną liczbę perfekcyjną
    int suma_dzielnikow = 0;    // suma liczb dzielących
    int wynik = 0, kontrolka;

    for(int szukana_liczba_perfekcyjna=2; szukana_liczba_perfekcyjna<=24; szukana_liczba_perfekcyjna++)   // domniemaną liczbę perfekcyjną dzielimy przez "i"
    {
        for(int dzielimy_przez=1; dzielimy_przez<=10000; dzielimy_przez++)
        {
            if(szukana_liczba_perfekcyjna % dzielimy_przez == 0)
            {     
                suma_dzielnikow += dzielimy_przez;
            };
            if(suma_dzielnikow == szukana_liczba_perfekcyjna){wynik = szukana_liczba_perfekcyjna; kontrolka = 1;};
        };
        if(wynik != szukana_liczba_perfekcyjna){wynik = 0;};    
        if(wynik != 0 && kontrolka == 1){printf("Liczbą perfekcyjną jest: %d \n", szukana_liczba_perfekcyjna);};
        suma_dzielnikow = 0;
        kontrolka = 0;  // by nie wypisywać wielu identycznych wyników
    };
};

int main()
{
    euclid();
}
