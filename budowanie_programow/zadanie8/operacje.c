#include <stdio.h>

int licz_1, licz_2, licz_3;
int suma, iloczyn, najmniejsza, najwieksza;

void sum()
{
    suma = licz_1 + licz_2 + licz_3;
    printf("Suma wynosi: %d \n", suma);
};

void ilocz()
{
    iloczyn = licz_1 * licz_2 * licz_3;
        printf("Iloczyn wynosi: %d \n", iloczyn);
};

void min()
{
    if(licz_1<licz_2){najmniejsza = licz_1;};               // jeśli 1 liczba jest mniejsza od drugiej to jest ona wynikiem
    if(licz_2<najmniejsza){najmniejsza = licz_2;};          // jeśli jednak liczba druga jest mniejsza to jest ona wynikiem
    if(licz_3<najmniejsza){najmniejsza = licz_3;};          // jeśli jednak liczba trzecia jest mniejsza to jest ona wynikiem
    printf("Najmniejsza liczba to: %d \n", najmniejsza);
};

void max()
{
    if(licz_1>licz_2){najwieksza = licz_1;};                // jeśli 1 liczba jest większa od drugiej to jest ona wynikiem
    if(licz_2>najwieksza){najwieksza = licz_2;};            // jeśli jednak liczba druga jest większa to jest ona wynikiem
    if(licz_3>najwieksza){najwieksza = licz_3;};            // jeśli jednak liczba trzecia jest większa to jest ona wynikiem
    printf("Największa liczba to: %d \n", najwieksza);
};