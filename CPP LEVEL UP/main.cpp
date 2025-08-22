#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include <iostream>
using namespace std;

int main() {
    string name;
    int choice;

    Player* party[1]; // 포인터 배열 (캐릭터 1명만 저장)

    cout << "==== 캐릭터 생성 ====" << endl;
    cout << "닉네임을 입력하세요: ";
    cin >> name;

    cout << "\n==== 직업 선택 ====" << endl;
    cout << "1. 전사" << endl;
    cout << "2. 마법사" << endl;
    cout << "3. 도적" << endl;
    cout << "4. 궁수" << endl;
    cout << "번호를 선택하세요: ";
    cin >> choice;

    switch (choice) {
    case 1:
        party[0] = new Warrior(name);
        break;
    case 2:
        party[0] = new Magician(name);
        break;
    case 3:
        party[0] = new Thief(name);
        break;
    case 4:
        party[0] = new Archer(name);
        break;
    default:
        cout << "잘못된 선택입니다. 캐릭터를 생성하지 않습니다." << endl;
        party[0] = nullptr;
        break;
    }

    cout << "\n==== 캐릭터 정보 ====" << endl;
    if (party[0] != nullptr) {
        party[0]->showStatus();
        cout << "\n공격 시도!" << endl;
        party[0]->attack();
    }

    // 동적 메모리 해제
    delete party[0];

    return 0;
}