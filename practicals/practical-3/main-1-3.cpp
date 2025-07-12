#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonList(PersonList);

int main() {
    PersonList originalList;
    originalList.numPeople = 2;
    originalList.people = new Person[originalList.numPeople];

    originalList.people[0].name = "R";
    originalList.people[0].age = 11;
    originalList.people[1].name = "M";
    originalList.people[1].age = 14;

    PersonList copyList = deepCopyPersonList(originalList);

    originalList.people[0].name = "H";

    delete[] originalList.people;
    delete[] copyList.people;

    return 0;
}