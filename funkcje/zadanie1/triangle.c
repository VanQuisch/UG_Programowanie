#include <stdio.h>
#include <math.h>

double bok_a, bok_b, bok_c;
int choice;

void przeciwprostokatna()       // twierdzenie pitagorasa do obliczenia najdłuższego boku
{
    bok_c = pow(bok_a, 2) + pow(bok_b, 2);
}

void triangle_choice()
{
    switch(choice)  //wykorzystanie switcha do wyboru jednego z 3 wymaganych trójkątów
    {
        case 1 :
            bok_a = 3;
            bok_b = 4;
        break;

        case 2 :
            bok_a = 5;
            bok_b = 5;
        break;

        case 3 :
            bok_a = 1;
            bok_b = 6;
        break;

        default : printf("Wybrałeś niepoprawny numer.\n");
    }
}