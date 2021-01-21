void ruch_gracza(char** plansza_widoczna, int** plansza_ukryta)
{
    char a;
    int b, c;  //a to litera A-J (kolumna), b to liczba 1-10 (wiersz)
    one_more_move:
    printf("Podaj wspolrzedne w ktore chcesz uderzyc\nKolumna(A-J) Wiersz(1-10 np. 'A2'): ");
    scanf(" %c", &a);
    scanf(" %d", &b);

    if(a=='A'||a=='a')
    {
        c=0;
    }
    if(a=='B'||a=='b')
    {
        c=1;
    }
    if(a=='C'||a=='c')
    {
        c=2;
    }
    if(a=='D'||a=='d')
    {
        c=3;
    }
    if(a=='E'||a=='e')
    {
        c=4;
    }
    if(a=='F'||a=='f')
    {
        c=5;
    }
    if(a=='G'||a=='g')
    {
        c=6;
    }
    if(a=='H'||a=='h')
    {
        c=7;
    }
    if(a=='I'||a=='i')
    {
        c=8;
    }
    if(a=='J'||a=='j')
    {
        c=9;
    }


    if(plansza_ukryta[b-1][c]==2)
    {
        printf("Ta wspolrzedna byla juz sprawdzona. \n");
        goto one_more_move;

    }


    if(plansza_ukryta[b-1][c]==1)
    {
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        plansza_widoczna[b-1][c]='X';
        plansza_ukryta[b-1][c]=2;
        printf("Trafiony!\n");
    }
    else
    {
        if(plansza_ukryta[b-1][c]==0)
        {
            plansza_ukryta[b-1][c]=2;
            printf("\n\n\n\n\n\n\n\n\n\n\n");
            plansza_widoczna[b-1][c]='-';
            printf("Pudlo!\n\n");
        }
    }

    printf("\n\n");
}
