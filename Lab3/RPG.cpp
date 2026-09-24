#include <iostream>
#include "RPG.h"

RPG::RPG()
{
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;

}

string getName()
{
    string player1;
    cout << "Enter your name: ";
    cin >> player1;
    return player1;
}

float getLuck()
{
    float luck1;
    cout << "Enter luck value: ";
    cin >> luck1;
    return luck1;
}

float getExp()
{
    float exp1;
    cout << "Enter Exp: ";
    cin >> exp1;
    return exp1;
}

int getLevel()
{
    int lvl1;
    cout << "Enter level: ";
    cin >> lvl1;
    return lvl1; 
}

void setHitsTaken(int new_hits);
{
    new_hits = new_hits //find a way to impliment luck into the hit and count the hit if it hits
}

bool isAlive()
{
    if(max_hits_taken != )
        return false;
    else
    {
        return true;
    }
}
/*int main()
{
    cout << getName() << endl;
    return 0;
}
string getName()
{
    string player1;
    cout << "Enter your name: ";
    getline(cin,player1);
    return player1;
}*/