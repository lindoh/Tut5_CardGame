#ifndef Card_H
#define Card_H
#include <iostream>

using namespace std;

class Card
{
private:
	int value;		//card number from 1-10
	string color;		//card colour, Red or Black

public:
	Card(int xValue, string xColor);		//class Card constructor declaration
	int number();							//method number() return the number on the card
	string colour();						//method colour() returns the colour of card (red or black) as string
	void print();							//method print() displays colour and number of card on screen

};

#endif