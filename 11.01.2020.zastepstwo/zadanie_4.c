#include <stdio.h>

int main () {
  int ref[10];
  int *wsk;
  int indeks;
  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
  scanf("%d %d\n", &ref[indeks], *wsk);
  printf("%d %d\n", ref[indeks], *wsk);
  return 0;
}