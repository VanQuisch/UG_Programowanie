#include <stdio.h>

int wiersze;
char znak;                                   // zrobilem globalnie by moc czyscic zmienna po za jej petla

int main()
{
    printf("Podaj dowolny znak: ");
    scanf("%c", &znak);

    for(int kolumny = 0; kolumny<7; kolumny++) //odpowiada za ilosc kolumn kolumny
    {
        for(wiersze = 0; wiersze<7; wiersze++) //odpowiada za ilosc znakow w wierszu
        {
            printf("%c", znak);                        // wypisuje znak: *
            if(wiersze%2){printf(" ");};     // wypisuje znak: 
        };
        printf("\n");                           // kończy wiersz
        wiersze = 0;                            // pilnuje by wiersz nie ciagnal sie w nieskonczonosc
    };
}