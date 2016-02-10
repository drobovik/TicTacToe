#include "Player.h"

Player::Player()
{
	this->collectionSize = 1;
	this->collection = new Piece[collectionSize];
}

Player::Player(int id)
{
	this->setPlayerID(id);
	this->collectionSize = 1;
	this->collection = new Piece[collectionSize];
}

int Player::getPlayerID()
{
	return playerID;
}

char Player::getPieceType()
{
	return pieceType;
}

void Player::setPlayerID(int id)
{
	this->playerID = id;
}

void Player::setPieceType(char symbol)
{
	this->pieceType = symbol;
}

void Player::extendCollection()
{
	Piece *oldCollection;
	oldCollection = new Piece[collectionSize];
	*oldCollection = *this->collection;

	this->collectionSize++;
	this->collection = new Piece[collectionSize];
	*this->collection = *oldCollection;
	delete oldCollection;
}

void Player::addPiece(Piece *p)
{
	this->collection[(0 + this->collectionSize)] = *p;
}