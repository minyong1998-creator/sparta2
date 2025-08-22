#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(const string& nickname)
    : Player(nickname)
{
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    HP = 65;
    MP = 50;
}

void Archer::attack()
{
    cout << "* 화살을 쏜다!" << endl;
}
