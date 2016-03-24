#include "DeckOfCards.h"
#include <time.h>

using namespace std;

DeckOfCards::DeckOfCards()
{
	cardArray = new Card[20];			//dynamicaaly allocates an array of strings for a full deck of cards
}

DeckOfCards::~DeckOfCards()
{}


Card DeckOfCards::reset()
{
	Card *cardPtr;		//creates an object of class Card as pointer

	//creating ten black cards (1-10)
	for (int i = 0; i < 10; i++)
	{
		cardPtr = new Card(i + 1, "Black");		//dynamically allocates a card object
		cardArray[i] = *cardPtr;		//stores the card color(black) for each card from 1-10 
	
	}

	for (int i = 0; i < 10; i++)
	{
		cardPtr = new Card(i + 1, "Red");		//dynamically allocates a card object
		cardArray[i+10] = *cardPtr;		//stores the card color(red) for each card from 1-10 

	}

	return *cardArray;
}

void DeckOfCards::shuffle()
{
	reset();			//resets the deck of cards first
	int rand =0;			//rand is a random number
	int temp1 = 0, temp2 =0;		//temporal variables will help to switch two random card positions

	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		rand = rand % 19 + 1;
		temp1 = rand;
		rand = rand % 19 + 1;
		temp2 = rand;

		if (temp1 != temp2)
		{
			cardArray[temp1] = cardArray[temp2];
			cardArray[temp2] = cardArray[temp1];
		}

		else
			i -= 1;

	}

	for (int i = 0; i < 20; i++)
	{
		cardArray[i].print();
	}
}