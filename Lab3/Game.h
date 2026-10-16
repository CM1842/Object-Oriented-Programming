#ifndef Game_H
#define Game_H
#include "RPG.h"
#include <vector>
#include <set>

//vector <RPG*> players;
//set <int> live_players;

class Game
{
    public:
        Game();
        
        void generatePlayer(int n);
        void endRound(RPG* winner, RPG* loser, int loserIndex);
        void battleRound();
        void gameLoop();
        void printFinalResult();

        int selectPlayer();

        ~Game();
        
    private: 
        vector <RPG*> players;
        set <int> live_players; 
};
#endif