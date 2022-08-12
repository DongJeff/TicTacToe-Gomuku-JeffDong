/*
Author: Michael Joo, Ryan Miller
Email: m.joo@wustl.edu, miller.ryan@wustl.edu
Summary: This header file creates the GameBase class. The GameBase class is the base class from which the 
TicTacToe and Gomoku classes are derived through public inheritance. 
*/
#pragma once
#include <vector>
#include <string>
#include "game_piece.h"

using namespace std;

class GameBase
{
public:
	virtual void print() = 0;
	virtual bool done() = 0;
	virtual bool draw() = 0;
	virtual int turn() = 0;
	int prompt(unsigned int& r, unsigned int& c);
	int play();
	static GameBase* makeGame(int argc, char* argv[]);
protected:
	vector<game_piece> board_;
	unsigned int num_cols=0;
	unsigned int num_rows=0;
	unsigned int longest_piece_length=1;
	//boolean to keep track of whether or not it is player1's turn
	bool player1_turn = true;
	//since TicTacToe board is 5x5, but valid spaces of TicTacToe are in 3x3 square, keep track of bounds of valid
	//board spaces in these seperate variables to make bounds checking applicable to all different game board sizes
	unsigned int x_start=0;
	unsigned int x_end=0;
	unsigned int y_start=0;
	unsigned int y_end=0;
	//make print statements generic
	string game_display;
	string player1_name;
	string player2_name;
};