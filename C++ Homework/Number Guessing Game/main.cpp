//===========================================
// Course: CIS 054 (100616) C/C++ Programming
// Assignment #: Number Guessing Game
// Name: Antonio Razo
// ID: 0942201
// Date: 05/10/2020
// Platform: macOS
// =========================================== 

// Resubmitted main.cpp because i forgot to add this ^

#include <iostream>
#include <cstdlib>
#include "player.h"
#include "humanplayer.h"
#include "computerplayer.h"

using namespace std;

void play(Player &player1, Player &player2);
bool checkForWin(int guess, int answer);

int main() {
  char ans, repeat;

  humanPlayer human1, human2;
  computerPlayer computer1, computer2;
  cout << "Welcome to the Land of Competitive Guessing!\n"
       << "============================================\n";
  do{
	  cout << "Are you ready for a game of Human vs Human? (y/n)\n";


	  cin >> ans;
	  if (ans == 'y' || ans == 'Y') {
	      cout << "==== Human vs. Human ====\n";
	      play(human1, human2);
	  }

	  cout << "Are you ready for a game of Computer vs Computer? (y/n)\n";
	  cin >> ans;
	  if (ans == 'y' || ans == 'Y') {
	      cout << "==== Computer vs. Computer ====\n";
	      play(computer1, computer2);
	  }

	  cout << "Are you ready for a game of Computer vs Human? (y/n)\n";
	  cin >> ans;
	  if (ans == 'y' || ans == 'Y') {
	      cout << "==== Computer vs. Human ====\n";
	      play(computer1, human1);
	  }

	  cout << "Would you like to start again?\n";
	  cin >> repeat;
	}while (repeat == 'y' || repeat == 'Y');

}

bool checkForWin(int guess, int answer) {
    
    cout<< "You guessed " << guess << ".";
    if (answer == guess) {
        cout<< "You’re right! You win!" <<endl;
        return true;
    }
    else if (answer < guess) {
        cout<< "Your guess is too high.\n" <<endl;
    }
    else {
        cout<< "Your guess is too low.\n" <<endl;
    }
    return false;
}
void play(Player &player1, Player &player2) {
    srand(time(NULL));
    int answer = 0, guess = 0;
    answer = rand() % 100;
    bool win = false;
    while (!win) {
        cout<< "Player 1’s turn to guess." <<endl;
        guess = player1.get_guess();
        win = checkForWin(guess, answer);
        if (win) return;
        cout<< "Player 2’s turn to guess." <<endl;
        guess = player2.get_guess();
        win = checkForWin(guess, answer);
    }
}

/* ==========================================================
Problems I had working on this assignment (and how I overcame these problems)
1. I was having problem (and I still am) trying to make the computers guess more 
logical answers it seems like even though the other computers guess was low it was 
guess an even lower number so that was really annoying

2. 

Other things I would like to share:
1. On Lecture video 15-4 you talked about using destructors as virtual functions but 
in that specific example it was for a pointer being assigned to a new square in my 
homework I didnt see a need for a pointer so I didn't use them and just had a destructor 
for every class so I think I'll look up examples of people using virtual destructors

2. Instead of directly implementing the main function to do 2 human vs human and 
1 computer vs human and 2 computer vs computer I just added a do while loop that asks
the user if they'd like to repeat the prompt message
========================================================== */