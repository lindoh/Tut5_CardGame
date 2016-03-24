#ifndef Card_H
#define Card_H
#include <iostream>
#include <string>

using namespace std;

class Card
{
private:
	int value;		//card number from 1-10
	string color;		//card colour, Red or Black

public:
	Card();
	Card(int, string);		//class Card constructor declaration
	~Card();				//class Card destructor
	int number();							//method number() return the number on the card
	string colour();						//method colour() returns the colour of card (red or black) as string
	void print();							//method print() displays colour and number of card on screen
	//friend class DeckOfCards;				//DeckOfCards is now a friend of Card
};

#endif