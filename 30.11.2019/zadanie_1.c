#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void print_result(int n)
{
    printf("\t%2d %6.0lf\n", n, pow (2,n));
}

int main(int argc, char const *argv[])
{
    int upper_limit = atoi(argv[1]);

    printf("Wpisz potegi 2 nieprzekraczajace %d. \n", upper_limit);

    int i=0;
    while (pow(2,i) <= upper_limit)
    {
        print_result(i);
        i++;
    }
}