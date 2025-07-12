#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl);

int main() {
    PersonList originalList;
    originalList.numPeople = 2;
    originalList.people = new Person[originalList.numPeople];

    originalList.people[0].name = "R";
    originalList.people[0].age = 11;
    originalList.people[1].name = "M";
    originalList.people[1].age = 14;

    PersonList copyList = shallowCopyPersonList(originalList);

    originalList.people[0].name = "H";

    delete[] originalList.people;

    return 0;
}