void ruch_pc(int** plansza_ukryta)
{
    srand(time(NULL));
    int random1;
    int random2;
    one_more_time:
    random1=rand()%10;
    random2=rand()%10;
    if (plansza_ukryta[random1][random2]==2||plansza_ukryta[random1][random2]==3)
    {
        goto one_more_time;
    }
    if (plansza_ukryta[random1][random2]==0)
    {
        plansza_ukryta[random1][random2]=3; //Jezeli pc strzeli w puste pole to zmienia je na wartosc 3 zeby juz go nie zbijac
    }
    if (plansza_ukryta[random1][random2]==1)
    {
        plansza_ukryta[random1][random2]=2; //Jezeli pc strzeli w pole ze statkiem to zmienia je na wartosc 3 zeby juz go nie zbijac
    }

}