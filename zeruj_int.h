void zeruj_int(int** plansza_widoczna)
{
    for(int i=0; i<=9; i++)
    {
        for(int j=0; j<=9; j++)
        {
            plansza_widoczna[i][j]=0;
        }
    }
}
