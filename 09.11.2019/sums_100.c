#include <stdio.h>
#include <math.h>

int main()
{

int N = 100;
int exponent = 4;
int S_4 = 0;

S_4 = pow(100, 4);

for(int i=1; i<100; i++)
{
    S_4 =+ pow(i, exponent);
    printf("%.0lf ", pow(i, 4));
}

printf("\n");
printf("%d\n", S_4);
}