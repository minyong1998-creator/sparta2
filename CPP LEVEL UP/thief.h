#pragma once
#include "player.h"

class Thief : public Player
{
public:
    Thief(const string& nickname);
    void attack() override;
};
#pragma once
