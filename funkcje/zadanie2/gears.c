#include <stdio.h>

int potega[10];

void licz_potega()
{potega[1] = 1;                     // należy ustawić potęgę na 1 by nie mnożyło zerem
    for(int i=2; i<11; i++)
    {
        potega[i]=potega[i-1]*i;    // wylicza potęgę i zapisuje ją w tabeli
    };
};

void tabelka()
{
    printf("  n   |  n! \n");
    printf("----------------\n");
    for(int i=0; i<11; i++)
    {
    if(i<=9){printf("  %d   |  %d  \n", i, potega[i] );}    // wypisywanie liczb na tabeli
    else{printf("  %d  |  %d  \n", i, potega[i] );};        // wyrównanie obrysu tabeli dla wartości dwucyfrowej
    };
};