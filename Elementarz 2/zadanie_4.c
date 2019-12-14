#include <stdio.h>
int main() {
   /** deklaracje zmiennych lokalnych */
   int nb, nt, nl;
   char c;

   nb = 0;  /* liczba znaków odstêpu */
   nt = 0;  /* liczba znaków tabulacji */
   nl = 0;  /* liczba znaków nowego wiersza */
   while ((c=getchar()) != EOF) {
      if(getchar()=" ")     {nb++;};
      if(getchar()="    ")  {nt++;};
      if(getchar()="\n")    {nl++;};
   }
   printf("liczba znaków odstêpu = %d, \
      tabulacji = %d, nowego wiersza = %d\n", ... );
   return 0;
}
