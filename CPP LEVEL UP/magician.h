#pragma once
#include "player.h"

class Magician : public Player
{
public:
    Magician(const string& nickname);
    void attack() override;
};
