#pragma once
#include "player.h"

class Archer : public Player
{
public:
    Archer(const string& nickname);
    void attack() override;
};
#pragma once
