#pragma once
#include <string>
using namespace std;

class Player
{
protected:
    string nickname;   
    string job_name;   
    int HP;            
    int MP;            

public:
    Player(string nickname);      
    virtual ~Player() = default;  

    virtual void attack() = 0;    
    void showStatus();            
};
#pragma once
