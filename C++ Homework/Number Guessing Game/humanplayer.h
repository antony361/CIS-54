#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "player.h"

class humanPlayer : public Player
{
public:
  humanPlayer();
  ~humanPlayer();

  int get_guess() const;
};
#endif