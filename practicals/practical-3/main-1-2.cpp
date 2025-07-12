#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int);

int main() {
    int numPeople = 11;
    PersonList A = createPersonList(numPeople);
    return 0;
}