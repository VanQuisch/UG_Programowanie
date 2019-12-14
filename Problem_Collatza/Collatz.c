#include <stdio.h>

int tabela[100];
int numer_tabeli = 0;

int main()
{
    printf("Podaj cyfrę od której zaczynamy obliczenia: ");
    scanf("%d", &tabela[0]);    //wczytujemy do tabeli wartość początkową 
    while(tabela[numer_tabeli]>1)
    {
        if(tabela[numer_tabeli]%2==0)
        {
            tabela[numer_tabeli + 1] = tabela[numer_tabeli]/2;
        }
        else 
        {
            tabela[numer_tabeli+1] = 3*tabela[numer_tabeli] + 1;
        };

    printf("%d, ", tabela[numer_tabeli]);
    numer_tabeli++;
    };
}