#include "gears.h"

int main() 
{
    //time(&start_t);   // pobiera z zegara moment uruchomienia programu
    printf("Podaj datę swoich urodzin w formacie dd mm rrrr: ");
    scanf("%d %d %d", &dzien, &miesiac, &rok);

    zliczanie();           // przeliczanie i sumowanie z daty na sekundy

    printf("\nTyle to sekund: %d: ", wiek_sek);
    //printf("Minęło tyle sekund: %d", diff_t)      // wypisuje różnicę wartości sum sekund

    putchar('\n');      // do ładnego zakończenia ostatniej linijki
}