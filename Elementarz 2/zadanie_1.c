#include <stdio.h>

int main() {
  /* deklaracje zmiennych */
  int n;
  char jest_pierwsza[9];
  printf("Podaj liczbe calkowita: ");
  /* wczytaj t� liczb� do zmiennej n */
  scanf("%d", &n);
  /* sprawd� czy n jest liczb� pierwsz� */
  if (n%2==0 && n!=2){jest_pierwsza[0] = "pierwsza";}
  else {jest_pierwsza[0] = "z�o�ona";};
  printf("Podana liczba '%d' jest %s\n",
    n, jest_pierwsza ? "pierwsza" : "z�o�ona");
  return 0;
}
