#include <iostream>
#include "humanplayer.h"
using namespace std;

humanPlayer::humanPlayer() { }

humanPlayer::~humanPlayer() { }

int humanPlayer::get_guess() const {
  int guess;
  
  do {
    cout << "Please enter your guess:";
    cin >> guess;
  }while (guess < 0 || guess > 100);
  
  return guess;
}