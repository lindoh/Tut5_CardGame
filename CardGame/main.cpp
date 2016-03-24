#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

void main()
{
	DeckOfCards deck;
	deck.reset();

	cout << endl;

	deck.shuffle();

	cin.get();
}