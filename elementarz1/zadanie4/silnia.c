int powerto, wynik=1;   // wynik musi zaczynać się od cyfry większej niż zero by można było cokolwiek pomnożyć

void licz_silnia()
{    
    for(int i=1; i<=powerto; i++)
    {
        wynik *= i;         // wynik to liczba * obecna i do momentu aż i osiągnie wartość podanej liczby
    };
};