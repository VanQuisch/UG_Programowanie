#include <stdio.h>

int main() {
  /* deklaracje zmiennych */
  int n;
  char jest_pierwsza[9];
  printf("Podaj liczbe calkowita: ");
  /* wczytaj tê liczbê do zmiennej n */
  scanf("%d", &n);
  /* sprawdŸ czy n jest liczb¹ pierwsz¹ */
  if (n%2==0 && n!=2){jest_pierwsza[0] = "pierwsza";}
  else {jest_pierwsza[0] = "z³o¿ona";};
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "z³o¿ona");
  return 0;
}
