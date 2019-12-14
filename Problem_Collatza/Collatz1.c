#include <stdio.h>

int tabela[10000];
int numer_tabeli = 0;
int max=1;
int nxt_digit;

void frame()
{
    printf("|   N   |   OK  | \n");
    for(int i=0; i<17; i++)
    {
        printf("-");
    };
    printf("\n");
    
    for(int i=1; i<=10; i++)  //to 10 to jest ilość wierszy
    {
        if(i<10){printf("|   %d   |   T   | \n", i);}       //To "T" to tylko placeholder
        else if(i<100){printf("|  %d   |   T   | \n", i);}
        else if(i<1000){printf("|  %d  |   T   | \n", i);}
        else if(i<10000){printf("| %d  |   T   | \n", i);}
        else if(i<100000){printf("| %d |   T   | \n", i);};

    };
};

void funkcja()
{

    //printf("Podaj cyfrę od której zaczynamy obliczenia: ");
    //scanf("%d", &tabela[0]);    //wczytujemy do tabeli wartość początkową 
    for(int i=0; i<tabela[0]; i++)
    {
    while(tabela[numer_tabeli]>=1)
    {
        if(tabela[numer_tabeli]%2==0)
        {
            tabela[numer_tabeli + 1] = tabela[numer_tabeli]/2;
        }
        else if(tabela[numer_tabeli]==1)
        {
            tabela[numer_tabeli] = 1; 
        }
        else 
        {
            tabela[numer_tabeli+1] = 3*tabela[numer_tabeli] + 1;
        };
        

        if(max < tabela[numer_tabeli]){max = tabela[numer_tabeli];};    // Wyliczanie maxymalnej wartości

    printf("%d \n", tabela[numer_tabeli]);        //wypisywanie wartości Collatza
    numer_tabeli++;
    };
    };
    //printf("1 \n");   //Dopisywanie 1 na końcu bo kończy wypisywanie na 2

    printf("Wartość największa to %d \n", max);
};

int main()
{
    tabela[0] = 100;
    //frame();
    //funkcja();
}