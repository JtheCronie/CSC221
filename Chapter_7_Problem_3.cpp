/* File Name: Chapter_7_Problem_3.cpp
Programmer: Jason Cronenwett
Date: 05/10/2026
Requirements:
1. Tic-Tac-Toe: two-player game played on a 3x3 char board.
2. Board cells start as '*'. Player 1 places 'X', Player 2 places 'O'.
3. The game ends when someone gets three in a row (row, column, or diagonal)
4. Or when the board fills with no winner (a tie).
*/

#include <iostream>
using namespace std;

int main()
{
    char board[3][3];
    int row, col;
    int turn = 1;
    int moves = 0;
    char player;

    
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            board[r][c] = '*';
        }
    }

    
    while (true)
    {
        
        cout << endl;
        for (int r = 0; r < 3; r++)
        {
            for (int c = 0; c < 3; c++)
            {
                cout << board[r][c] << " ";
            }
            cout << endl;
        }
        cout << endl;

       
        if (turn == 1)
        {
            player = 'X';
            cout << "Player 1, enter your move." << endl;
        }
        else
        {
            player = 'O';
            cout << "Player 2, enter your move." << endl;
        }

        cout << "Enter row (1-3): ";
        cin >> row;
        cout << "Enter column (1-3): ";
        cin >> col;

        board[row - 1][col - 1] = player;
        moves = moves + 1;

        if (board[0][0] == player && board[0][1] == player && board[0][2] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }
        if (board[1][0] == player && board[1][1] == player && board[1][2] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }
        if (board[2][0] == player && board[2][1] == player && board[2][2] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }

        if (board[0][0] == player && board[1][0] == player && board[2][0] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }
        if (board[0][1] == player && board[1][1] == player && board[2][1] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }
        if (board[0][2] == player && board[1][2] == player && board[2][2] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }

        if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }
        if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        {
            cout << "Player " << turn << " wins!" << endl;
            break;
        }

        if (moves == 9)
        {
            cout << "It's a tie!" << endl;
            break;
        }
        if (turn == 1)
        {
            turn = 2;
        }
        else
        {
            turn = 1;
        }
    }

    return 0;
}


