#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(const string& nickname)
    : Player(nickname)
{
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    HP = 60;
    MP = 100;
}

void Magician::attack()
{
    cout << "* ���̾�� �߻��Ѵ�!" << endl;
}
