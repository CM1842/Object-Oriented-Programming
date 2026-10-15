#include "Game.h"
#include <random>
#include <iostream>

Game::Game()
{
}

void Game::generatePlayer(int n)
{
    for(int i = 0; i < n; i++)
    {
        players.push_back(new RPG());

        string new_name = "NPC_" + to_string(i);
        players[i] -> setName(new_name);
        live_players.insert(i);    
    }
}

int Game::selectPlayer()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, live_players.size()-1);

    int randomIndex = dis(gen);

    set <int> ::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
}

void Game::endRound(RPG *winner, RPG *loser, int loserIndex)
{
    (*winner).RPG::setHitsTaken(0);
    //removes the losers from the live_players
    (*winner).RPG::updateExpLevel();
    cout << "NPC_%i won against NPC_%i",live_players ,loserIndex ; // check the values after comma
}
