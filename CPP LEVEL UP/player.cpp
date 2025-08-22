#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string nickname)
{
    this->nickname = nickname;
    this->job_name = "초보자";
    this->HP = 50;
    this->MP = 30;
}

void Player::showStatus()
{
    cout << "======================" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "======================" << endl;
}
