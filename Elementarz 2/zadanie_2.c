#include <stdio.h>

int main() {
  /* deklaracje zmiennych */
  int n;
  char jest_pierwsza[9];
  printf("Podaj liczbe calkowita: ");
  /* wczytaj tę liczbę do zmiennej n */
  scanf("%d", &n);
  /* sprawdź czy n jest liczbą pierwszą */
  if (n%2!=0 && n!=2){jest_pierwsza[0] = "pierwsza";} //jeśli nie dzieli się na pół i jest różne od dwa
  else {jest_pierwsza[0] = "złożona";};               //W każdym innym przypadku
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "złożona");  //Nie rozumiem działania tego: jest_pierwsza ? "pierwsza" : "złożona"
  return 0;
}
