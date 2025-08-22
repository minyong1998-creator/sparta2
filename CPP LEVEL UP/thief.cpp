#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(const string& nickname)
    : Player(nickname)
{
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    HP = 70;
    MP = 40;
}

void Thief::attack()
{
    cout << "* 수리검 투척!" << endl;
}
