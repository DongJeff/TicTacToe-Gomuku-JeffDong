
#pragma once
/*
Author: Ryan Miller
Email: miller.ryan@wustl.edu
Summary: This header file creates a game_piece struct and defines the 3 different piece types in any game
*/

#include <string>
using namespace std;

enum piece_type {
    piece_one,
    piece_two,
    empty_space
};

struct game_piece {
    game_piece();
    game_piece(piece_type type, string name);
    piece_type type_;
    string name_;
};