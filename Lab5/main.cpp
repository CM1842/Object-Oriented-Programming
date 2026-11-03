#include <iostream>
#include "Charmander.h"
using namespace std;

int main()
{
    vector <string> pokemonType;
    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "-----Constructor Created-----\n";
    Charmander charlie = Charmander("Charlie", 100,4,4,pokemonType,skills);

    cout << "\n-----Direct Speak-----\n";
    charlie.speak();
    
    Pokemon * pl = &charlie;
    cout << "\n-----Speak called from Pokemon Pointer-----\n";

}