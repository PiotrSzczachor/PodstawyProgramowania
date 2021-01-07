int win_check_horizontally(char board[5][5], int* game_over)
{
    int win = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(board[i][j] == board[i][j+1] && board[i][j] != ' ')
            {
                win = 1;
            }
            else
            {
                win = 0;
                break;
            }

        }
        if(win == 1)
        {
            *game_over = 1;
            return 1;
            break;
        }

    }
    return 0;
}


int win_check_perpendicularly(char board[5][5], int* game_over)
{
    int win = 0;
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<4; i++)
        {
            if(board[i][j] == board[i+1][j] && board[i][j] != ' ')
            {
                win = 1;
            }
            else
            {
                win = 0;
                break;
            }

        }
        if(win == 1)
        {
            *game_over = 1;
            return 1;
            break;
        }

    }
    return 0;
}


int win_check_diagonally1(char board[5][5], int* game_over)
{
    int win = 0;
    for(int i = 0, j = 0; i < 4, j < 4; i++, j++)
    {
        if(board[i][j] == board[i+1][j+1] && board[i][j] != ' ')
        {
            win++;
        }
        else {
            win = 0;
            break;
        }

        if(win == 4)
        {
            *game_over = 1;
            return 1;
            break;
        }

    }
    return 0;
}


int win_check_diagonally2(char board[5][5], int* game_over)
{
    int win = 0;
    for(int i = 0, j = 4; i < 4, j > 0; i++, j--)
    {
        if(board[i][j] == board[i+1][j-1] && board[i][j] != ' ')
        {
            win++;
        }
        else {
            win = 0;
            break;
        }

        if(win == 4)
        {
            *game_over = 1;
            return 1;
            break;
        }

    }
    return 0;
}
