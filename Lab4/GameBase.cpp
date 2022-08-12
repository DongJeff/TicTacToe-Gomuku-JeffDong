#pragma once
/*
Author: Ryan Miller
Email: miller.ryan
Summary: This file defines the functions in the game base class that are not pure virtual functions.
The functions prompt() is used to prompt the user for user input, play() is used to start playing a game of any
type, and makeGame() is used to return a gameBase pointer that points to an derived game class object.
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <utility>
#include "Lab4.h"
#include "game_piece.h"
#include "GameBase.h"
#include "TicTacToe.h"
#include "Gomoku.h"

//This method will accept input such as 2,2,2. It will simply extract the first two coordinates (2,2)
//This method will not accept input without a comma
//This method will not accept input that overlaps with another piece or falls outside the bounds of the board
//This method will print the message "no comma was found in a string" once for each string on the command line. For exmaple, "22" will print the message onece, but "2 2" will print the message twice
int GameBase::prompt(unsigned int& r, unsigned int& c)
{

    bool reprompt = true;
    while (reprompt)
    {
        cout << "Enter a coordinate pair of form 'col,row' or type 'quit' to exit game" << endl;
        string response;
        //get the entire line rather than 1 word at a time
        getline(cin, response);
        //if user wants to stop playing
        if (response == "quit")
        {
            reprompt = false;
            return quit_game;
        }
        if (response.find(',') == -1)
        {
            cout << "no comma was found in the string" << endl;
            continue;
        }
        response[response.find(',')] = ' ';
        istringstream iss(response);
        unsigned int tempr;
        unsigned int tempc;
        bool extraction = false;
        bool inside_board = false;
        if (iss >> tempc && iss >> tempr)
        {
            extraction = true;
        }
        else
        {
            cout << "coordinates could not be extracted properly" << endl;
            continue;
        }

        if (tempr >= y_end || tempc >= x_end)
        {
            cout << "coordinates are outside of playing board" << endl;
            continue;
        }
        else if (tempr < y_start || tempc < x_start)
        {
            cout << "coordinates are outside of playing board" << endl;
            continue;
        }
        else
        {
            inside_board = true;
        }

        //no need to reprompt if both coordinate values can be extracted, the coordinates are inside the board, and it doesnt overlap with another piece
        if (inside_board && extraction && board_[static_cast<size_t>(y_end) * static_cast<size_t>(tempr) + static_cast<size_t>(tempc)].name_ == " ")
        {
            reprompt = false;
            r = tempr;
            c = tempc;
            cout << response << endl;
            return success;
        }
        else
        {
            cout << "the input coordinates overlap with another piece" << endl;
        }

    }
    return success;

}

//This method is called in order to start playing the game
int GameBase::play()
{
    cout << "Beginning a game of " << game_display << "!"<< endl;
    print();
    bool run = true;
    int counter = 0;
    while (run)
    {
        int result = turn();
        if (done())
        {
            if (player1_turn)
            {
                cout << player2_name << " won the game" << endl;
            }
            else
            {
                cout << player1_name << " won the game" << endl;
            }
            return success;
        }
        if (draw())
        {
            cout << "The game resulted in a draw" << endl;
            cout << counter + 1 << " turns were played!" << endl;
            return draw_game;
        }
        if (result == quit_game)
        {
            cout << "A user quit the game" << endl;
            cout << counter << " turns were played!" << endl;
            return quit_game;
        }
        counter++;
    }
    return success;

}

//This method is used so that depending on the user input, the gameBase pointer can be initialized to the correct game type object
GameBase* GameBase::makeGame(int argc, char* argv[])
{
    if (argc == correct_num_args)
    {
        //check if command line contains proper game name
        string s = string(argv[game_name]);
        if (s == "TicTacToe")
        {
            GameBase *test = new TicTacToe();
            return test;
        }
        else if (s == "Gomoku")
        {
            GameBase* test = new Gomoku();
            return test;
        }
        else
        {
            GameBase* test = 0;
            return test;
        }
    }
    else
    {
        if (argc > 2)
        {
           throw too_many_command_line_arguments_error;
        }
        if (argc <= 1)
        {
            throw too_few_command_line_arguments_error;
        }
        //seems like this will never get reached, but was giving a warning without a return value here
        GameBase* test = 0;
        return test;
    }
    
}