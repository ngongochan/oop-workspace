#include <iostream>
#include "Cage.h"

using namespace std;

int main() {
    Cage pet1;
    cout << "This pet is called " << pet1.getName() << "with the ID " << pet1.getIDnum() << endl;
    Cage pet2("Sunny", 123);
    cout << "This pet is called " << pet2.getName() << "with the ID " << pet2.getIDnum() << endl;
}