#include <iostream>
#include "RPG.h"

RPG::RPG()
{
    this -> name = "NPC";
    this -> hits_taken = 0;
    this -> luck = 0.1;
    this -> exp = 50.0;
    this -> level = 1;

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
    cout << "Enter Exp value: ";
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

void RPG::setHitsTaken(int new_hits);
{
    int hitsT = 0;
    int randomNum  = rand() % 10; // change to 0.1 to make it similar to float luck value
    
    if(randomNum < luck)
    {
        hits_taken = hits_taken + 1;
    }
    else 
    {
        hits_taken = hits_taken;
    }
        

}

const bool RPG::isAlive()
{
    if(max_hits_taken != hits_taken)
    {
        return false;
    }
    else
    {
        return true;
    }
}
}