#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"

class Board
{
	private:
		char spaces[3][3];
	public:
		Board();
		void clearBoard();
		void displayBoard();
		void addPiece(Piece*);
};

#endif