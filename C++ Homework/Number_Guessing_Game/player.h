#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player 
{
public:
  Player();
  ~Player();

  virtual int get_guess() const;
};

#endif