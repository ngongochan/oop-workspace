#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    PersonList A;
    A.people = new Person[n];
    A.numPeople = n;

    for (int i =  0; i < n; i++) {
        A.people[i].name = "Jane Doe";
        A.people[i].age = 1;
    }

    return A;
}