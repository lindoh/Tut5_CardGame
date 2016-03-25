#include "DeckOfCards.h"



using namespace std;

DeckOfCards::DeckOfCards()
{
	NumOfCards = 20;				//initialise number of cards
	cardDeck = new Card[NumOfCards];			//dynamicaaly allocates an array of strings for a full deck of cards
}

DeckOfCards::~DeckOfCards()
{}


Card DeckOfCards::reset()
{
	Card *cardPtr;		//creates an object of class Card as pointer

	//creating ten black cards (1-10)
	for (int i = 0; i < NumOfCards-10; i++)
	{
		cardPtr = new Card(i + 1, "Black");		//dynamically allocates a card object
		cardDeck[i] = *cardPtr;		//stores the card color(black) for each card from 1-10 
	
	}

	for (int i = 0; i < NumOfCards-10; i++)
	{
		cardPtr = new Card(i + 1, "Red");		//dynamically allocates a card object
		cardDeck[i+10] = *cardPtr;		//stores the card color(red) for each card from 1-10 

	}

	for (int i = 0; i < NumOfCards; i++)
	{
		cardDeck[i].print();				//print the whole deck of cards
	}

	cout << endl << endl;

	return *cardDeck;
}



void DeckOfCards::shuffle()
{
	
	int temp1, temp2;		//temporal variables will help to switch two random card positions

	Card *PtrArray;			//a Card object to hold a current value of cardDeck

	srand(time(NULL));

	for (int i = 0; i < 50; i++)
	{
		temp1 = rand() % NumOfCards;
		temp2 = rand() % NumOfCards;

		if (temp1 != temp2)
		{
			
			PtrArray = new Card[20];
			PtrArray[temp1] = cardDeck[temp1];
			cardDeck[temp1] = cardDeck[temp2];
			cardDeck[temp2] = PtrArray[temp1];
		}


	}

	for (int i = 0; i < NumOfCards; i++)
	{
		cardDeck[i].print();				//print the shuffled deck of cards
	}

	cout << endl << endl;
	
}

Card DeckOfCards::draw()
{
	Card *TopCard;				
	TopCard = new Card;				//dynamically creating new card object

	TopCard[0] = cardDeck[NumOfCards - 1];		//stores the top card on the deck
	NumOfCards -= 1;							//remove the card from the deck

	return TopCard[0];
}

Card DeckOfCards::peek()
{
	Card *TopCard;
	TopCard = new Card;

	TopCard[0] = cardDeck[NumOfCards - 1];

	return TopCard[0];
}

int DeckOfCards::numberOfCards()
{
	return NumOfCards;
}

