#include <iostream>
#include <random>
#include "RPG.h"

RPG::RPG()
{
    this -> name = "NPC";
    this -> hits_taken = 0;
    this -> luck = 0.1;
    this -> exp = 60.0;
    this -> level = 1;
};

RPG::RPG(string name, int hits_taken, float luck, float exp, int level)
{
    this ->name = name;
    this -> hits_taken = hits_taken;
    this -> luck = luck;
    this -> exp = exp;
    this -> level = level;
};

string RPG::getName() const
{
    return name;
}

int RPG::getHitsTaken() const
{
    return hits_taken;
}

float RPG::getLuck() const
{
    return luck;
}

float RPG::getExp() const
{
    return exp;
}

int RPG::getLevel() const
{
    return level;
}

void RPG::setHitsTaken(int new_hits)
{
    hits_taken = new_hits;
}

bool RPG::isAlive() const
{
    if(max_hits_taken != hits_taken)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// New functions
void RPG::setName(string name)
{
    this -> name = name;
}

void RPG::updateExpLevel()
{
    exp = exp + 50; 
    
    if(exp >= 100)
    {
        level = level + 1;
        exp = 0;
        luck = luck + 0.1 ;
    }
}

void RPG::attack(RPG* opponent)
{
    bool hit = false;
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    float rand_num = dis(gen);

    if(rand_num  > hit_factor * (*opponent).getLuck()) 
    {
        hit = true;
    }
    if(hit == true)
    {
        opponent->setHitsTaken(opponent->getHitsTaken() + 1);
    }
}

void RPG:: printStats()
{
    cout << "Name: " << name << "   Hits Taken: " << hits_taken << "    Luck: " << luck << "    Exp: " << exp << "  Level: " << level << "\n";
}
RPG::~RPG()
{
}
