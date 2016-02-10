#ifndef PIECE_H
#define PIECE_H

class Piece
{
	private:
		char pieceSymbol;
		int row;
		int column;
	public:
		Piece(); //ctor
		Piece(int, int); // ctor
		char getPieceSymbol();
		int getRow();
		int getColumn();
		void setPieceSymbol(char);
		void setRow(int);
		void setColumn(int);
};

#endif