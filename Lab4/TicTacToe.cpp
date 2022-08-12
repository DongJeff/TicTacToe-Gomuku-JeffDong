/*
Author: Ryan Miller, Michael Joo
Email: miller.ryan@wustl.edu, m.joo@wustl.edu
Summary: This source file defines a constructor for the TicTacToe class and defines all of the public methods
needed to play a game of TicTacToe. The constructor simply initializes the vector to contain 25 "empty_space"
game pieces, and fills out the gameBase protected variables to contain the correct values of the valid board
dimensions and the necessary display information. The ostream operator << is defined so that the board can be
printed out. Indexes 0 and 4 are the maximum indexes of the board. Indexes 1 and 3 are the maximum indexes of
the tictactoe game.Also, the index position in the board_ vector uses the same formula that was given to us in Lab #2,
which was index = width * row # + col #
*/

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <iomanip>  
#include "game_piece.h"
#include "Lab4.h"
#include "TicTacToe.h"

using namespace std;


TicTacToe::TicTacToe()
{
    num_rows = 5;
    num_cols = 5;
    for (unsigned int r = 0; r < num_rows * num_cols; ++r)
    {
        board_.push_back(game_piece());
    }
    x_start = 1;
    x_end = 4;
    y_start = 1;
    y_end = 4;
    game_display = "TicTacToe";
    player1_name = "X player";
    player2_name = "O player";
}

ostream& operator<< (ostream& o, const TicTacToe& t)
{
    cout << setw(t.longest_piece_length);
    for (int row = 4; row >= 0; row--)
    {
        cout << row << " ";
        for (int col = 0; static_cast<unsigned int>(col) < 5; ++col)
        {
            cout << t.board_[static_cast<size_t>(4) * static_cast<size_t>(row) + static_cast<size_t>(col)].name_ << " ";
        }
        cout << "\n";
    }
    cout << "  " << "0 " << "1 " << "2 " << "3 " << "4" << endl;

    return o;
}

void TicTacToe::print() {
    cout << *this << endl;
}

bool TicTacToe::done()
{
    bool result = false;
    //first case checks every row to see if there is a row with all same pieces
    for (int r = 1; r < 4; ++r)
    {
        bool win = true;
        auto firstpiece = board_[static_cast<size_t>(4) * static_cast<size_t>(r) + static_cast<size_t>(1)];
        for (int c = 2; c < 4; ++c)
        {
            //check if all pieces in a row have the same name and make sure they are not blank spaces
            if (board_[static_cast<size_t>(4) * static_cast<size_t>(r) + static_cast<size_t>(c)].name_ != firstpiece.name_)
            {
                win = false;
            }
        }
        if (win && firstpiece.name_ != " ")
        {
            result = true;
        }
    }
    //second case checks every col to see if there is a col with all same pieces and make sure they are not blank spaces
    for (int c = 1; c < 4; ++c)
    {
        bool win = true;
        auto firstpiece = board_[static_cast<size_t>(4) * static_cast<size_t>(1) + static_cast<size_t>(c)];
        for (int r = 2; r < 4; ++r)
        {
            //check if all pieces in a row have the same name
            if (board_[static_cast<size_t>(4) * static_cast<size_t>(r) + static_cast<size_t>(c)].name_ != firstpiece.name_)
            {
                win = false;
            }
        }
        if (win && firstpiece.name_ != " ")
        {
            result = true;
        }
    }
    //third case checks each diagonal to see if there are 3 Xs or 3 Os
    //diagonal going from bottom left to top right
    auto firstpiece = board_[static_cast<size_t>(4) * static_cast<size_t>(1) + static_cast<size_t>(1)];
    int i = 2;
    int j = 2;
    bool diagWin = true;
    while (i < 4 && j < 4)
    {
        if (board_[static_cast<size_t>(4) * static_cast<size_t>(i) + static_cast<size_t>(j)].name_ != firstpiece.name_ || firstpiece.name_ == " ")
        {
            diagWin = false;
        }
        i++;
        j++;
    }
    if (diagWin)
    {
        result = true;
    }

    //diagonal from top left to bottom right
    firstpiece = board_[static_cast<size_t>(4) * static_cast<size_t>(3) + static_cast<size_t>(1)];
    i = 2;
    j = 2;
    diagWin = true;
    while (i >= 1 && j < 4)
    {
        if (board_[static_cast<size_t>(4) * static_cast<size_t>(i) + static_cast<size_t>(j)].name_ != firstpiece.name_ || firstpiece.name_ == " ")
        {
            diagWin = false;
        }
        i--;
        j++;
    }

    if (diagWin)
    {
        result = true;
    }
    return result;
}

bool TicTacToe::draw()
{
    //if the game is complete then it is not a draw
    if (done())
    {
        return false;
    }
    else
    {
        for (int r = 1; r < 4; ++r)
        {
            for (int c = 1; c < 4; ++c)
            {
                //if there are any empty spaces on the board then it is not a draw
                if (board_[static_cast<size_t>(4) * static_cast<size_t>(r) + static_cast<size_t>(c)].name_ == " ")
                {
                    return false;
                }
            }
        }
    }
    return true;
}


int TicTacToe::turn()
{
    game_piece curr_piece = game_piece();
    if (player1_turn)
    {
        cout << "X's Turn:" << endl;
        curr_piece = game_piece(piece_one, "X");
    }
    else
    {
        cout << "O's Turn:" << endl;
        curr_piece = game_piece(piece_two, "O");
    }
    unsigned int r = 0;
    unsigned int c = 0;
    unsigned int& rref = r;
    unsigned int& cref = c;
    int result = prompt(rref, cref);
    if (result == quit_game)
    {
        return quit_game;
    }

    //set board at the selected coordinates to correct piece and print out board
    board_[static_cast<size_t>(4) * static_cast<size_t>(r) + static_cast<size_t>(c)] = curr_piece;
    print();

    //Add move coordinates to a vector and then print out the move history of the player
    pair<unsigned int, unsigned int> move(c, r);
    if (player1_turn)
    {
        X_coords.push_back(move);
        auto i = X_coords.begin();
        cout << "Player X: ";
        while (i != X_coords.end())
        {
            if (i + 1 == X_coords.end())
            {
                cout << (*i).first << "," << (*i).second << "\n";
            }
            else
            {
                cout << (*i).first << "," << (*i).second << "; ";
            }
            i++;
        }
    }
    else
    {
        O_coords.push_back(move);
        auto i = O_coords.begin();
        cout << "Player O: ";
        while (i != O_coords.end())
        {
            if (i + 1 == O_coords.end())
            {
                cout << (*i).first << "," << (*i).second << "\n";
            }
            else
            {
                cout << (*i).first << "," << (*i).second << "; ";
            }
            i++;
        }
    }


    //change turn
    player1_turn = !player1_turn;

    return success;
}
