#include "jednostki.c"

int main()
{
    printf("Wpisz swój wzrost w formacie \"wzrost jednostka_miary\".\nUżyj inch dla cali lub cm dla centymetrów: \n");
    scanf("%lf %c", &wzrost, &jednostka);

    wyb_jednostki();
}