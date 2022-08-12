/*
Author: Ryan Miller
Email: miller.ryan@wustl.edu
Summary: This source file defines the 2 different constructors used by the game_piece struct
*/

#include <iostream>
#include <string>
#include "game_piece.h"

using namespace std;

game_piece::game_piece(piece_type type, string name)
    : type_(type), name_(name) {}

game_piece::game_piece()
    : type_(empty_space), name_(" ") {}