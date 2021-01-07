#include <stdio.h>
#include <stdlib.h>


void drawing_board(char board[5][5])
{
    //Drawing board
    printf("   ---------------------\n");
    for(int i=0, row=5; i<5; i++, row--)
    {
        printf("%d  ", row);
        for(int j=0; j<5; j++)
        {
            printf("| %c ", board[i][j]);
        }

        printf("|");
        printf("\n");
        printf("   ---------------------\n");
    }
    printf("\n   ");
    for(char column='A'; column<='E'; column++)
    {
        printf("  %c ", column);
    }
    printf("\n");
}