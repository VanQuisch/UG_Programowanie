/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>

int main() 
{
   int tabela[] = {1, 2, 4, 6, 12};
   for(int i=4; i>=0; i--)          // dekrementacja zmiennej odpowiada za odliczanie miejsc w tabeli od końca
   {
       printf("%d \n", tabela[i]);
   };
   return 0;
}