#include "Piece.h"
#include <iostream>

Piece::Piece()
{
	this->setPieceSymbol('?');
}

Piece::Piece(int r, int c)
{ 
	this->setPieceSymbol('?');
	this->setRow(r);
	this->setColumn(c);
}

char Piece::getPieceSymbol()
{ return pieceSymbol; }

int Piece::getRow()
{ return row; }

int Piece::getColumn()
{ return column; }

void Piece::setPieceSymbol(char symbol)
{ pieceSymbol = symbol; }

void Piece::setRow(int num)
{ row = num; }

void Piece::setColumn(int num)
{ column = num; }