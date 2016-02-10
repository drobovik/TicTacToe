#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Piece.h"

class Player
{
	private:
		std::string playerName;
		int playerID;
		int collectionSize;
		char pieceType;
		Piece *collection;
	public:
		Player();
		Player(int);
		std::string getPlayerName();
		int getPlayerID();
		char getPieceType();
		void setPlayerName(std::string);
		void setPlayerID(int);
		void setPieceType(char);
		void extendCollection();
		void addPiece(Piece*);
};

#endif