#include <iostream>
#include "RPG.h"
#include "Game.h"

using namespace std;

int main()
{
    Game rpgGame;
    int num_players = 10;
    rpgGame.generatePlayer(num_players);
    rpgGame.gameLoop();
    rpgGame.printFinalResult();

    return 0;
}

