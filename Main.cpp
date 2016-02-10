/*
	Tic-Tac-Toe
	main.cpp
	Sayre Murrietta-Ackridge
*/

#include <iostream>
#include <string>
#include "Board.h"
#include "Piece.h"
#include "Player.h"

using namespace std;

const char CROSS = 'X';
const char NOUGHT = 'O';

void playerInput(Piece*, char); // gathers input for where to place a piece on the board
bool validInput(int, int); // checks and validates row and column input from player

int main()
{
	char turn;
	bool gameOver = false;

	Board *b;
	b = new Board;

	Player *p1;
	Player *p2;
	p1 = new Player(1);
	p2 = new Player(2);
	p1->setPieceType(CROSS);
	p2->setPieceType(NOUGHT);

	Piece *currentPiece;
	turn = CROSS;

	do
	{
		currentPiece = new Piece;
		b->displayBoard();
		playerInput(currentPiece, turn);
		b->addPiece(currentPiece);

		if (turn == p1->getPieceType())
		{
			p1->extendCollection();
			p1->addPiece(currentPiece);
		}

		else if (turn == p2->getPieceType())
		{
			p2->extendCollection();
			p2->addPiece(currentPiece);
		}

		if (turn == CROSS)
		{ turn = NOUGHT; }
		else 
		{ turn = CROSS; }

	} while (gameOver == false);

	return 0;
}

bool validInput(int r, int c)
{
	if (r < 0 || r > 2)
	{ 
		cout << "Error: row value out of range." << endl;
		return false;
	}
	
	else if (c < 0 || c > 2)
	{ 
		cout << "Error: column value out of range." << endl;
		return false;
	}

	else { return true; }
}

void playerInput(Piece *currentPiece, char currentTurn)
{
	int r;
	int c;

	do 
	{
		cout << "enter a row and column: ";
		cin >> r;
		cin >> c;
	} while (validInput(r, c) == false);

	currentPiece->setPieceSymbol(currentTurn);
	currentPiece->setRow(r);
	currentPiece->setColumn(c);
}