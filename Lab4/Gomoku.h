/*
Author: Michael Joo
Email: m.joo@wustl.edu
Summary: This header file creates the Gomoku class. The class also contains the public methods needed to play
a game of Gomoku. This class also overloads the ostream insertion operator.
*/
#pragma once
#include "GameBase.h"

class Gomoku : public GameBase
{
public:
	Gomoku();
	virtual bool done();
	virtual bool draw();
	virtual int turn();
	friend ostream& operator<< (ostream& o, const Gomoku& g);
	virtual void print();
};