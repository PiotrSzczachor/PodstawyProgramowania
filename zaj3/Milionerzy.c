#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pytanie za 1 000\n");
    printf("Co wywoluje kile?\nA: paleczka\nB: laseczka\nC: pratek\nD: kretek\n");
    char odp1;
    scanf("%c", &odp1); //wczytanie odpowiedzi na pytanie 1
    if(odp1=='D') //jezeli odpowiedz na pierwsze pytanie to 'D', to wyswietlamy nastepne pytanie
    {
        printf("Poprawna odpowiedz\n");
        printf("Pytanie za 40 000\n");
        printf("Na fladze ktorego kraju widnieje przyprawa do pasztetu?\nA: Hiszpani\nB: Grenady\nC: Chin\nD: Szwecji\n");
        char odp2;
        scanf(" %c", &odp2);//wczytujemy odpowiedz na pytanie 2
        if(odp2=='B')//jezeli odpowiedz na pierwsze pytanie to 'B', to wyswietlamy nastepne pytanie
        {
            printf("Poprawna odpowiedz\n");
            printf("Pytanie za 1 000 000\n");
            printf("Wedlug Jana Dlugosza byla corka Kraka i nie chciala Niemca. Jak skonczyla?\nA: w Wisle\nB: Nafaszerowana prochem\nC: W paszczy smoka wawelskiego\nD: Jako stara panna\n");
            char odp3;
            scanf(" %c", &odp3);//wczytujemy odpowiedz na pytanie 2
            if(odp3=='A')//jezeli odpowiedz na pierwsze pytanie to 'A', to wyswietlamy nastepne pytanie
            {
                printf("Poprawna odpowiedz, wygrywasz milion");

            }
            else
            {
                printf("Zla odpowiedz, przegrales");
            }


        }
        else
        {
            printf("Zla odpowiedz, przegrales");
        }

    }
    else
    {
    printf("Zla odpowiedz, przegrales");
    }


    return 0;
}
