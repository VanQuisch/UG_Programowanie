#include <stdio.h>
#include <math.h>
#include "jbernoulli.h"

// x^y
static long long int powerll(long long x, long long int y)
{
    return powl(x, y);
}

//exported

long long int calculate_sum(int y, int upper_limit) 
{
    long long int result = 0;

    for(int i=1; i<= upper_limit; i++)
    {
        result += powerll(i, y);
    }
    return result;
}

void print_results(int y, int s)
{
    printf("1^%d + 2^%d + ... + 1000^%d = %12d\n", y, y, y, s);
}