#include <stdio.h>
int main() {
   /** deklaracje zmiennych lokalnych */
   int nb, nt, nl;
   char c;

   nb = 0;  /* liczba znak�w odst�pu */
   nt = 0;  /* liczba znak�w tabulacji */
   nl = 0;  /* liczba znak�w nowego wiersza */
   while ((c=getchar()) != EOF) {
      if(getchar()=" ")     {nb++;};
      if(getchar()="    ")  {nt++;};
      if(getchar()="\n")    {nl++;};
   }
   printf("liczba znak�w odst�pu = %d, \
      tabulacji = %d, nowego wiersza = %d\n", ... );
   return 0;
}
