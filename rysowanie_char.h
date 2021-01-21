//Rysowanie planszy widocznej dla uzytkownika na ktorej sa zaznaczone jego trafienia i pudła
void rysowanie_char(char typ, char** plansza_widoczna) //zeby poprawnie wyswietlalo tablice nalezy podac dobry typ wiec trzeba dopisac druga funkcje do rysowania tablic int i char...
{
    for(char i='A'; i<='J'; i++)
    {
        if(i=='A')
        {
            printf("    ");
        }
        printf("%c ", i);
    }
    printf("\n");
    for(int i=0, j=1; i<=9; i++, j++)
    {
        if(j!=10)
        {
            printf("\n %d  ", j);
        }
        else
        {
            printf("\n%d  ", j);
        }
        for(int j=0; j<=9; j++)
        {
            if(typ=='c')
            {
                printf("%c ", plansza_widoczna[i][j]);
            }
            else
            {
                if(typ=='d')
                {
                    printf("%d ", plansza_widoczna[i][j]);
                }
            }

        }

    }
    printf("\n\n");
}
