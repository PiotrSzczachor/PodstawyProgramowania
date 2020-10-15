#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kwota zainwestowana, kwota zwrocona, ilosc miesiecy, procent, procent miesieczny
    float a, b, c;
    
    printf("Podaj kwote zainwestowana\n");
    scanf("%f", &a); //wczytywanie kwoty zainwestowanej
    
    printf("Podaj kwote zwrocona\n");
    scanf("%f", &b); //wczytywanie kwoty zwroconej
    
    printf("Podaj ilosc miesiecy\n");
    scanf("%f", &c); //wczytywanie ilosci miesiecy
    
    float d=(b-a)/a; //obliczanie o jaki procent zwiekszyla sie kwota [ (kwota zwrocona - kwota zainwestowana)/kwota zainwestowana ]
    printf("Procent o jaki zwiekszyla sie kwota zainwestowana: %f\n", d);
    
    float e=(((b-a)/c)/a); //obliczanie o jaki procent miesiecznie wzrastala kwota
    printf("Procent miesięczny: %f", e);
    
    return 0;

}

