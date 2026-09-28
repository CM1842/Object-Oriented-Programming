#include <iostream>
#include "RPG.h"
using namespace std;

int main()
{
    RPG p1 = RPG("Wiz", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Level: %i\t", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());
    
    cout << "\nP2 hits taken";
    cout << "0 is dead, 1 is alive\n";
    
    return 0;
}