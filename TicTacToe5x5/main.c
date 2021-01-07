#include <stdio.h>
#include "draw_check.h"
#include "drawing_board.h"
#include "convert_letter_to_number.h"
#include "convert_number_to_letter.h"
#include "win_check.h"



int main()
{
    char board[5][5] = {{' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' '}};

    int win_horizontally = 0;
    int win_perpendicularly = 0;
    int win_diagonally1 = 0;
    int win_diagonally2 = 0;
    int counter = 1;
    int end = 0;
    int *game_over = &end;
    int row_choice, column_choice_int, row_choice_int;
    char column_choice;

    while (*game_over != 1)
    {
        draw_check(board, game_over);
        drawing_board(board);
        if (counter % 2 == 1)
        {
            one_more_choice_X:
            printf("Na jakich wspolrzednych chesz podstawic 'X', np 'A3'?\n");
            scanf(" %c %d", &column_choice, &row_choice);
            column_choice_int = convert_letter_to_number(column_choice);
            row_choice_int = convert_number_to_number(row_choice);
            if(board[row_choice_int][column_choice_int] != ' ')
            {
                printf("Wybrana wspolrzedna jest juz zajeta, wybierz jeszsze raz. \n");
                goto one_more_choice_X;
            }
            board[row_choice_int][column_choice_int] = 'X';
            win_horizontally = win_check_horizontally(board, game_over);
            win_perpendicularly = win_check_perpendicularly(board, game_over);
            win_diagonally1 = win_check_diagonally1(board, game_over);
            win_diagonally2 = win_check_diagonally2(board, game_over);

            if(win_horizontally == 1 || win_perpendicularly == 1 || win_diagonally1 == 1 || win_diagonally2 == 1)
            {
                drawing_board(board);
                printf("Brawo, 'X' wygrywa gre!");
            }
            counter++;

        }
        else {
            one_more_choice_Y:
            printf("Na jakich wspolrzednych chcesz postawic 'O'?\n");
            scanf(" %c %d", &column_choice, &row_choice);
            column_choice_int = convert_letter_to_number(column_choice);
            row_choice_int = convert_number_to_number(row_choice);
            if(board[row_choice_int][column_choice_int] != ' ')
            {
                printf("Wybrana wspolrzedna jest juz zajeta, wybierz jeszsze raz. \n");
                goto one_more_choice_Y;
            }
            board[row_choice_int][column_choice_int] = 'O';
            win_horizontally = win_check_horizontally(board, game_over);
            win_perpendicularly = win_check_perpendicularly(board, game_over);
            win_diagonally1 = win_check_diagonally1(board, game_over);
            win_diagonally2 = win_check_diagonally2(board, game_over);

            if(win_horizontally == 1 || win_perpendicularly == 1 || win_diagonally1 == 1 || win_diagonally2 == 1)
            {
                drawing_board(board);
                printf("Brawo, 'O' wygrywa gre!");
            }
            counter++;
        }

    }

}