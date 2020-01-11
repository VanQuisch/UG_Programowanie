#include <stdio.h>

int a, b;

void swap_integers(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
};

int main()
{
    printf("Wpisz wartość a: ");
    scanf("%d", &a);
    printf("Wpisz wartość b: ");
    scanf("%d", &b);

    swap_integers(&a, &b);

    printf("Wartość a: %d\n", a);
    printf("Wartość b: %d\n", b);
}