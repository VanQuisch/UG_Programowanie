#include <stdio.h>
int main() {
   /** deklaracje zmiennych lokalnych */
   int nb, nt, nl;
   char c;

   nb = 0;  /* liczba znaków odstępu */
   nt = 0;  /* liczba znaków tabulacji */
   nl = 0;  /* liczba znaków nowego wiersza */
   while ((c=getchar()) != EOF) {
      if(c=='case:32')      {nb++;};
      if(c=='case:09')      {nt++;};
      if(c=='\n')           {nl++;};
   }
   printf("liczba znaków odstępu = %d, \
      tabulacji = %d, nowego wiersza = %d\n", nb, nt, nl);  // wyrzuca kosmiczne wartości // Nie powinno tyle dodawać
   return 0;
}
