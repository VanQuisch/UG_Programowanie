/* Program ten wypisuje liczby z tablicy tabela[]
   w odwrotnej kolejności: 12, 6, 4, 2, 1 */
#include <stdio.h>

int i = 4;

int main() 
{
   int tabela[] = {1, 2, 4, 6, 12};
   while(i!=EOF)    // dopuki nie osiągniemy końca, ma wykonywać
   {
       printf("%d \n", tabela[i]);
       i--;     // przejście do wcześniejszej kolumny w tabeli
   };

   return 0;
}