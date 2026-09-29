#include <iostream>
#include "RPG.h"
using namespace std;

int main()
{
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG("Name", 0, 0.1, 50, 1);


    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t\n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());
    
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\t", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

    p1.setHitsTaken(2);
    p2.setHitsTaken(3);

    p1.isAlive();
    p2.isAlive();

    cout << "\nP2 hits taken 3";
    cout << "\n0 is dead, 1 is alive\n";
    
    return 0;
}