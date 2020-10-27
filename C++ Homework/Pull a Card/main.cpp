//===========================================
// Course: CIS 054 (100616) C/C++ Programming
// Assignment #: 2-1
// Name: Antonio Razo
// ID: 0942201
// Date: 02/15/2020
// Platform: macOS
//  Algorithm:
// 	1. Picking the suit of the card
//  2. Picking the value of the card
// 	3. Print out both values
// 	4. Add a random factor
// ===========================================

#include <iostream>
#include <ctime>
using namespace std;

char answer;

// ===========================================
// Fctn Name: value_picker
// Purpose:	pick a value between 1-13 representing all the values in a deck of cards
// Precondition; N/A
// Postconditions: returns a number 1-13
// ===========================================
int value_picker();

// ===========================================
// Fctn Name: suit_picker
// Purpose:	picks a number between 1-4 for all the suits in a deck of cards
// Precondition; N/A
// Postconditions: returns a number from 1-4
// ===========================================
int suit_picker();


int main(int argc, char const *argv[])
{	
	srand(time(0));
	cout << "Let's pull a card!" << endl;
	do{
		cout << "This time we got "; 
		switch (value_picker()) {
			case 11: cout << "A"; break;
			case 12: cout << "J"; break;
			case 13: cout << "Q"; break;
			case 1: cout << "K"; break;
			default: cout << value_picker(); break;
		}

		switch(suit_picker()) {
			case 1: cout << "H" << endl; break;
			case 2: cout << "C" << endl; break;
			case 3: cout << "S" << endl; break;
			case 4: cout << "D" << endl; break;
		}
		cout << "Wanna pull a card again?" << endl;
		cin >> answer;
	}while( answer == 'Y' || answer == 'y');
}

int value_picker() {
	int card_value;
	card_value = rand() % 13 + 1;
	return card_value;	
}

int suit_picker(){
	int suit;
	suit = rand() % 4 + 1;
	return suit;
}

/* ==========================================================
Problems I had working on this assignment (and how I overcame these problems)
1. I couldn't seem to put the switch cases in the functions themselves instead i had to put them
in the main function although I feel like there is a way to put those switch cases in the other functions

2. Going back to the first problem i had when i put the switch cases in suit_picker and value_picker
both functions would return the ASCII value which would then need me to put a switch case in the main function 
which felt like it wasn't the best way to do it.
Other Things I wish to share
1.N/A
2.N/A
========================================================== */




