#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(const string& nickname)
    : Player(nickname)
{
    job_name = "����";
    cout << "* �������� �����Ͽ����ϴ�." << endl;
    HP = 70;
    MP = 40;
}

void Thief::attack()
{
    cout << "* ������ ��ô!" << endl;
}
