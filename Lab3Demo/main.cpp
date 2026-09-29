#include <iostream>
#include "Person.h"
using namespace std;

void printStats(Person * p)
{
    printf("Name: %s Age: %i Occupation: %s Lives in IE: %i\n", 
    (*p).getName(),(*p).getAge(), (*p).getOccupation(), (*p).getLivesInIE() );
}

int main()
{
    Person bob = Person("Bob", 100, "retired", true);
    printStats(&bob);

    Person unknown = Person();

    printStats(&unknown);

    unknown.updateName("Jane Doe");
    unknown.updateAge(99);
    unknown.updateOccupation("student");
    printStats(&unknown);

    

}