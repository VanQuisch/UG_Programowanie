#include <stdio.h>
#include <math.h>

int main()
{
    #define KNRM  "\x1B[0m"
    #define KRED  "\x1B[31m"
    #define KGRN  "\x1B[32m"
    #define KYEL  "\x1B[33m"
    #define KBLU  "\x1B[34m"
    #define KMAG  "\x1B[35m"
    #define KCYN  "\x1B[36m"
    #define KWHT  "\x1B[37m"

double a, b, c;
double x1, x2, delta, sqrt_delta;

    scanf("%lf %lf %lf", &a, &b, &c);
    printf("podano a, b, c = %.2lf, %.2lf, %.2lf\n", a, b, c);

    delta = b*b - 4 * a * c;
    sqrt_delta = sqrt(delta);

    x1 = (-b - sqrt_delta) / (2 * a);
    x2 = (-b - sqrt_delta) / (2 * a);

    printf("Policzone pierwiastki: x1 = %lf, x2 = %lf\n", x1, x2);
}