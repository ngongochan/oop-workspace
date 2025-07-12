#include <iostream>
#include "Cage.h"
#include "Clinic.h"

using namespace std;

int main() {
    Cage pet1("A", 1);
    Cage pet2("B", 2);
    Cage pet3("C", 3);
    Cage pet4("D", 4);
    Cage pet5("E", 5);

    Clinic AB("Clinic AB", 4);
    cout << "The clinic's name is " << AB.getName() << endl;

    if(AB.addCage(pet1)){
        cout << pet1.getName() << "is added to the cage" << endl;
    } else {
        cout << pet1.getName() << "is not added to the cage" << endl;
    }
}