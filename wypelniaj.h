void wypelniaj(int x, int** plansza_ukryta)
{
    char a;
    int b, c;
    printf("Witaj graczu nr%d\n", x); //x to nr gracza podawany jako argument do funkcji
    printf("Wypelnij swoja plansze statkami podajac wspolrzedne na ktorych maja sie znajdowac.\n");
    printf("Masz do dyspozycji:\n1 statek wielkosci 5 pol\n2 statki wielkosci 4 pol\n3 statki wielkosci 3 pol\n4 statki wielkosci 2 pol\n1statek wielkosci 1 pole\n\n");
    printf("Statki nalezu ustawiac w pionie i w poziomie, nie na ukos. Odstep miedzy statkami powinien wynosic conajmniej 1 pole.\nLacznie do zapelnienia jest 31 wspolrzednych.\n\n");
    printf("Podczas rozgrywki zbite statki beda oznaczane poprzez '2', natomiast pola w ktore strzelal juz przeciwnik poprzez '3'\n\n");
    for(int i=0, j=1; i<31; i++,j++)
    {
        printf("Podaj %d wspolrzedna np. 'B5': ", j);
        scanf(" %c %d", &a, &b);
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
        plansza_ukryta[b-1][c]=1;
        //system("cls");
        rysowanie_int('d',plansza_ukryta);
    }

}






