#include <stdio.h>

int table_size, min, max;
int tablica[] = {1, 2, 3, 4, 5};

void MinMax()
{
    while( tablica[table_size != EOF])
    {
        if(tablica[table_size] < tablica[table_size +1]){min = tablica[table_size];};
        if(tablica[table_size] > tablica[table_size +1]){max = tablica[table_size];};
    };
};

void table_fill()
{
    for(int i = 0; i<=table_size; i++)
    {
        tablica[i] = i;      
    };
};

int main()
{
    printf("Podaj wielkość tablicy: ");
    scanf("%d\n", &table_size);


}
