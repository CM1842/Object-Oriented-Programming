#include "Person.h"

Person::Person()
{
    name = "";
    age = -1;
    occupation = "";
    livesInIE = false;
}

Person::Person(string name, int age, string occupation, bool IE)
{
    this -> name = name;
    this -> age = age;
    this -> occupation = occupation;
    this -> livesInIE = IE;
}

void Person::updateName(string uName)
{
    name = uName;
}

void Person::updateAge(int uAge)
{
    age = uAge;
}

void Person::updateOccupation(string uOccupation)
{
    occupation = uOccupation;
}


string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

string Person::getOccupation()
{
    return occupation;
}

bool Person::getLivesInIE()
{
    return livesInIE;
}

