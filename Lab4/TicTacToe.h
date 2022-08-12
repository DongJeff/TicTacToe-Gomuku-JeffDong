#pragma once
/*
Author: Ryan Miller
Email: miller.ryan@wustl.edu
Summary: This header file creates the TicTacToe class. The TicTacToe class has 2 private variables which
store a  a vector of all the moves made by player X, and a vector of all the moves made by player O.
The class also contains the public methods needed to play a game of TicTacToe.
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <utility>
#include "Lab4.h"
#include "game_piece.h"
#include "GameBase.h"

using namespace std;

class TicTacToe : public GameBase
{
public:
	TicTacToe();
	virtual bool done();
	virtual bool draw();
	virtual int turn();
	friend ostream& operator<< (ostream& o, const TicTacToe& t);
	virtual void print();

private:
	vector<pair<unsigned int, unsigned int>> X_coords;
	vector<pair<unsigned int, unsigned int>> O_coords;
};