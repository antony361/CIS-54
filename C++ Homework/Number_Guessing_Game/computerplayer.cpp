#include <iostream>
#include "computerplayer.h"
using namespace std;

computerPlayer::computerPlayer() { }

computerPlayer::~computerPlayer() { }

int computerPlayer::get_guess() const {
  int guess;
  guess = rand() % 100 + 1;
  return guess;
}