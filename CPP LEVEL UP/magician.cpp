#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(const string& nickname)
    : Player(nickname)
{
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    HP = 60;
    MP = 100;
}

void Magician::attack()
{
    cout << "* 파이어볼을 발사한다!" << endl;
}
