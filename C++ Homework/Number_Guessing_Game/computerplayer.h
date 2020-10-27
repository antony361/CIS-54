#ifndef COMPUTERPLAYER_h
#define COMPUTERPLAYER_h

#include "player.h"

class computerPlayer : public Player
{
public: 
  computerPlayer();
  ~computerPlayer();

  int get_guess() const;
    
};
#endif

