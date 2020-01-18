#include <stdio.h>

char jednostka;
double wzrost;

void wyb_jednostki()
{
    switch(jednostka)
    {
        case 'c': wzrost /= 2.54, printf("%lf inch\n", wzrost);
        break;

        case 'i': wzrost *= 2.54, printf("%lf cm\n", wzrost);
        break;

        default : wzrost *= 17.8, printf("%lf bananów\n", wzrost);
        printf("Nie wybrałeś nic więc wybrałeś skalę banana (1 banan = 17.8 cm).\n");
    };
}