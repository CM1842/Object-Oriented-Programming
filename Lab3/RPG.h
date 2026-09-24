#include <string>
#ifndef RPG_H
#define RPG_H
using namespace std;

const int inventory_size = 3;
const float hit_factor = 0.05;
const int max_hits_taken = 3;

class RPG
{
    public:
        
        RPG();
        RPG(string name, int hits_taken, float luck, float exp, int level);
        

        bool isAlive() const;
        void setHitsTaken(int new_hits);

        const string getName();
        const int getHitsTaken();
        const float getLuck();
        const float getExp();
        const int getLevel();
    
    private:
        string name;
        int hits_taken;
        float luck;
        float exp;
        int level;

};
#endif