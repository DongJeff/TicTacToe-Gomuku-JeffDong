// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Author: Ryan Miller
Email: miller.ryan@wustl.edu
Summary: This file processes the user command line input and will start a game of the users choice. It also
defines the definition of the usage() function
*/

#include <iostream>
#include <sstream>
#include <string>
#include <memory>
#include "Lab4.h"
#include "game_piece.h"
#include "TicTacToe.h"
#include "GameBase.h"

using namespace std;

int main(int argc, char* argv[])
{

    try {
        // can throw exceptions
        shared_ptr<GameBase> s(GameBase::makeGame(argc, argv));
        if (s == 0)
        {
            return usage(argv[program_name]);
        }
        else
        {
            return (*s).play();
        }
    }
    //if the command line contains too many or too few arguments when a call to makeGame() is made, an exception is thrown
    catch (failure_type f) {
        return f;
    }
    //the only other exception that could be thrown by the call to makeGame() is a bad alloc exception caused by the 'new' operator
    catch (...) {
        return bad_alloc_exception;
    }


    //should never reach this statement
    return unexpected_error;
}

failure_type usage(char* program) {
    cout << "usage: " << program << " <input game name>" << endl;
    return invalid_game_type_error;
}
