#include <stdlib.h>
#include <stdio.h>

int a, b;

void prosba()
{
    printf("Wpisz zmienna ale nie zepsuj mi inta, prosze: ");
}

int main()
{
    prosba();
    scanf("%d", &a);
    prosba();
    scanf("%d", &b);

    printf("\n");

    if(a<b)
    {
    printf("Cyfry od %d do %d: \n", a, b);
    for(int i=a+1; b>i; i++){printf("%d \n", i);};
    }

    if(a>b)
    {
    printf("Cyfry od %d do %d: \n", b, a);
    for(int i=b+1; a>i; i++){printf("%d \n", i);};
    }
}