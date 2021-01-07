// Funkcja sprawdzajaca czy mamy remis
void draw_check(char board[5][5], int* game_over)
{
    int empty = 0;

    for(int i=0; i<=2; i++)
    {
        for(int j=0; j<=2; j++)
        {
            if(board[i][j]==' ')
            {
                empty = 0;
                break;
            }
            else
            {
                empty = 1;
            }
        }
        if(empty==0)
        {
            break;
        }
    }
    if(empty==1)
    {
        printf("Remis");
        *game_over = 1;
    }
}