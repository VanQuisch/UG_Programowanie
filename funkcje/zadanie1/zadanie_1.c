#include "triangle.h"

int main()
{
    printf("Zadanie 1: ");
    printf("Wybierz który trójkąt chcesz obliczyć wpisując jego numer: ");
    scanf("%d", &choice);   //zbieramy zmienną do obsługi switcha

    triangle_choice();  //wybór trójkąta z presetu

    przeciwprostokatna();   //obliczenie przeciwprostokątnej

    printf("Długość przeciwprostokątnej to: %0.f \n", sqrt(bok_c)); //wypisujemy wynik w pierwiastku bez miejsc po przecinku
}