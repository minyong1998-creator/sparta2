#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(const string& nickname)
    : Player(nickname)
{
    job_name = "�ü�";
    cout << "* �ü��� �����Ͽ����ϴ�." << endl;
    HP = 65;
    MP = 50;
}

void Archer::attack()
{
    cout << "* ȭ���� ���!" << endl;
}
