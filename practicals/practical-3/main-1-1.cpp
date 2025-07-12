#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int);

int main() {
    Person* arr = createPersonArray(10);
    delete[] arr;
}