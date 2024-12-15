#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <iostream>

class Player {
  private:
  public:
    unsigned int *life;
    Player();
    void showLife() const;
    virtual ~Player();
};

#endif
