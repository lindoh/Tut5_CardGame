#include "Card.h"

using namespace std;

Card::Card(int xValue, string xColor)
{
	value = xValue;			//initialising private variable value(number)
	color = xColor;			//initialising private variable color
}

Card::~Card()
{}

int Card::number()
{
	return value;		//returns the appropriate number on card
}

string Card::colour()
{
	return color;		//returns appropriate colour of card
}

void Card::print()
{
	cout << colour() << " " << number() << endl;		//prints the colour and number on card on screen
}
