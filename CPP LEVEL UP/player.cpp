#include "player.h"
#include <iostream>
using namespace std;

Player::Player(string nickname)
{
    this->nickname = nickname;
    this->job_name = "�ʺ���";
    this->HP = 50;
    this->MP = 30;
}

void Player::showStatus()
{
    cout << "======================" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "======================" << endl;
}
