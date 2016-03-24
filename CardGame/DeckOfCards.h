#ifndef DeckOfCards_H
#define DeckOfCards_H
#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

class DeckOfCards
{
private:
	Card *cardDeck;		//cardArray stores a full deck of Cards
	
public:
	DeckOfCards();			//default constructor
	~DeckOfCards();			//class destructor
	Card reset();			//reset returns unshuffled deck of cards
	void shuffle();			//shuffles the order of cards
	Card draw();			//returns top card from the deck of cards, number of cards decreases
	Card peek();			//returns top card from the deck of cards, number of cards does not change
	int numberOfCards();		//returns number of cards 

};

#endif