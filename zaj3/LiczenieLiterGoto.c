#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    char wyraz[100]; 
    scanf("%s", wyraz); //wczytywanie zmiennej wyraz
    etykieta: //odnosnik do goto
    if(wyraz[i]!=NULL) //wykonuj dopoki wartosc tablicy dla i jest rozna NULL
    {
        i++; //inkrementacja i
        //printf("%d",i); niepotrzebne, wypisuje po kolei liczby od 1 w takiej ilosci z ilu liter sklada sie wyraz
        goto etykieta; // idz do odnosnika

    }
    printf("%d", i); //wyswietl ostatnik licznik i dla ktorego if nie zostanie wykonane, czyli ilosc liter danego slowa

    return 0;
}
