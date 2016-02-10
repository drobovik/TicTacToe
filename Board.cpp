#include "Board.h"
#include <iostream>

Board::Board()
{
	clearBoard();
}

void Board::clearBoard()
{
	for (int r = 0; r < 3; r++)
	{
		for (int c = 0; c < 3; c++)
		{
			spaces[r][c] = '?';
		}
	}
}

void Board::displayBoard()
{
	std::cout << "---------" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << '|' << spaces[i][j] << '|';
		}
		std::cout << std::endl;
	}
	std::cout << "---------" << std::endl;
}

void Board::addPiece(Piece *p)
{
	spaces[p->getRow()][p->getColumn()] = p->getPieceSymbol();
}