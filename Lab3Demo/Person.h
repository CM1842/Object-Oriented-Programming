#ifndef PERSON_H
#define PERSON_H
using namespace std;
#include <string>

class Person
{
    public:
        Person();
        Person(string name, int age, string occupation, bool lives_in_IE);


        void updateName(string name);
        void updateAge(int age);
        void updateOccupation(string occupation);
        void moveLocation();

        string getName();
        int getAge();
        string getOccupation();
        bool getLivesInIE();
        bool isOlderThan();
    
    private:
        string name;
        int age;
        string occupation;
        bool livesInIE;

};
#endif