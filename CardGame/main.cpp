#include <iostream>
#include "Card.h"
#include "DeckOfCards.h"

using namespace std;

void main()
{
	DeckOfCards deck;
	Card myCard;

	char temp;
	bool quit = false;
	
	while (!quit)
	{
		cout << "Enter R to Reset card order  " << endl;
		cin >> temp;

		if (temp = 'R' || temp == 'r')
			deck.reset();						//Unshuffled order of cards
		
		cout << "Enter S to shuffle cards " << endl;
		cin >> temp;
		
		if (temp == 'S' || temp == 's')
			deck.shuffle();						//shuffled cards order

		
		cout << "Enter D to Draw Card or Enter P to peek the Top Card : " << endl;
		cin >> temp;

		if (temp == 'D' || temp == 'd')
			deck.draw().print();				//draw the Top card
		else if (temp == 'P' || temp == 'p')
			deck.peek().print();

		cout << endl;

		int num;
		cout << "Enter 1 to get the number of cards still in the deck " << endl;
		cin >> num;

		if (num == 1)
			cout << "  " << deck.numberOfCards() << " Cards Left " << endl<<endl;

		cout << "Enter Q to continue " << endl;
		cin >> temp;

		if (temp == 'Q' || temp == 'q')
			quit = false;

	}

	system("pause");
	//cin.get();
}