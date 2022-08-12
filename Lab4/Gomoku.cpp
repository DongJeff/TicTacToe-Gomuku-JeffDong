/*
Author: Michael Joo, Jeff Dong
Email: m.joo@wustl.edu, jiefeidong@wustl.edu
Summary: This source file defines a constructor for the Gomoku class and defines all of the public methods
needed to play a game of Gomoku. The constructor simply initializes the vector to contain 19^2 "empty_space"
game pieces. The ostream operator << is defined so that the board can be printed out.
*/

#include <iostream>
#include <iomanip>
#include "Gomoku.h"
#include "Lab4.h"

Gomoku::Gomoku()
{
	// defaults to a 19*19 board
	num_rows = 19;
	num_cols = 19;
	// initialize board with empty pieces
	for (unsigned int r = 0; r < num_rows * num_cols; r++)
	{
		board_.push_back(game_piece());
	}
	x_start = 0;
	x_end = 19;
	y_start = 0;
	y_end = 19;
	game_display = "Gomoku";
	player1_name = "Black Stone";
	player2_name = "White Stone";
	// board coordinates length
	if (num_rows > 9 || num_cols > 9)
	{
		longest_piece_length = 2;
	}
}

ostream& operator<<(ostream& o, const Gomoku& g)
{
	cout << endl;
	// coordinates on top
	cout << " X ";
	for (unsigned int col_num = 0; col_num < g.num_cols; ++col_num)
	{
		if (col_num < 10)
		{
			cout << " ";
		}
		cout << col_num << " ";
	}
	cout << "X";
	cout << endl;
	// coordinates on left and right
	for (int r = g.num_rows - 1; r >= 0; --r)
	{
		if (r < 10)
		{
			cout << " ";
		}
		cout << r << " ";
		for (unsigned int c = 0; c < g.num_cols; ++c)
		{
			int idx = g.num_cols * r + c;
			for (unsigned int i = 0; i < g.longest_piece_length - 1; ++i)
			{
				cout << " ";
			}
			cout << g.board_[idx].name_;
			cout << " ";
		}
		cout << r << " ";
		cout << "\n";
	}
	// coordinates on bottom
	cout << " X ";
	for (unsigned int col_num = 0; col_num < g.num_cols; ++col_num)
	{
		if (col_num < 10)
		{
			cout << " ";
		}
		cout << col_num << " ";
	}
	cout << "X";

	return o;
}

void Gomoku::print() {
	cout << *this << endl;
}

bool Gomoku::done()
{
	bool result = false;

	// check if 5 stones of the same color are in a row 
	for (unsigned int r = y_start; r < y_end; ++r)
	{
		for (unsigned int c = x_start; c < x_end - 4; ++c)
		{
			unsigned int idx = static_cast<size_t>(num_cols) * static_cast<size_t>(r) + static_cast<size_t>(c);
			auto check_piece = board_[idx];
			if (check_piece.name_ != " ")
			{
				bool win = true;
				for (unsigned int cnt = 1; cnt < 5; ++cnt)
				{
					if (check_piece.name_ != board_[static_cast<size_t>(idx) + static_cast<size_t>(cnt)].name_)
					{
						win = false;
						break;
					}
				}
				if (win)
				{
					result = true;
					return result;
				}
			}
		}
	}
	
	// check if 5 stones of the same color are in a column
	for (unsigned int c = x_start; c < x_end; ++c)
	{
		for (unsigned int r = y_start; r < y_end - 4; ++r)
		{
			unsigned int idx = static_cast<size_t>(num_cols) * static_cast<size_t>(r) + static_cast<size_t>(c);
			auto check_piece = board_[idx];
			if (check_piece.name_ != " ")
			{
				bool win = true;
				for (unsigned int cnt = 1; cnt < 5; ++cnt)
				{
					if (check_piece.name_ != board_[static_cast<size_t>(idx) + static_cast<size_t>(cnt) * static_cast<size_t>(num_cols)].name_)
					{
						win = false;
						break;
					}
				}
				if (win)
				{
					result = true;
					return result;
				}
			}
		}
	}
	
	// check if 5 stones of the same color are in a upper-left to lower-right diagonal
	for (unsigned int r = y_start + 4; r < y_end; ++r)
	{
		for (unsigned int c = x_start; c < x_end - 4; ++c)
		{
			unsigned int idx = static_cast<size_t>(num_cols) * static_cast<size_t>(r) + static_cast<size_t>(c);
			auto check_piece = board_[idx];
			if (check_piece.name_ != " ")
			{
				bool win = true;
				for (unsigned int cnt = 1; cnt < 5; ++cnt)
				{
					if (check_piece.name_ != board_[static_cast<size_t>(idx) - static_cast<size_t>(cnt) * (static_cast<size_t>(num_cols) - static_cast <size_t>(1))].name_)
					{
						win = false;
						break;
					}
				}
				if (win)
				{
					result = true;
					return result;
				}
			}
		}
	}

	// check if 5 stones of the same color are in a lower-left to upper-right diagonal
	for (unsigned int r = y_start; r < y_end - 4; ++r)
	{
		for (unsigned int c = x_start; c < x_end - 4; ++c)
		{
			unsigned int idx = static_cast<size_t>(num_cols) * static_cast<size_t>(r) + static_cast<size_t>(c);
			auto check_piece = board_[idx];
			if (check_piece.name_ != " ")
			{
				bool win = true;
				for (unsigned int cnt = 1; cnt < 5; ++cnt)
				{
					if (check_piece.name_ != board_[static_cast<size_t>(idx) + static_cast<size_t>(cnt) * (static_cast<size_t>(num_cols) + static_cast <size_t>(1))].name_)
					{
						win = false;
						break;
					}
				}
				if (win)
				{
					result = true;
					return result;
				}
			}
		}
	}

	return result;
}

bool Gomoku::draw()
{
	if (done()) {
		return false;
	}
	for (unsigned int r = y_start; r < y_end; ++r)
	{
		for (unsigned int c = x_start; c < x_end; ++c)
		{
			unsigned int idx = static_cast<size_t>(num_cols) * static_cast<size_t>(r) + static_cast<size_t>(c);
			auto check_piece = board_[idx];
			if (check_piece.name_ == " ")
			{
				return false;
			}
		}
	}
	return true;
}

int Gomoku::turn()
{
	game_piece curr_piece = game_piece();
	if (player1_turn)
	{
		cout << "Black Stone's Turn:" << endl;
		curr_piece = game_piece(piece_one, "B");
	}
	else
	{
		cout << "White Stone's Turn:" << endl;
		curr_piece = game_piece(piece_two, "W");
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
	int idx = num_cols * r + c;
	board_[idx] = curr_piece;
	print();

	//change turn
	player1_turn = !player1_turn;

	return 0;
}