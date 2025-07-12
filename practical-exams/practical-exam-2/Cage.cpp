#include <iostream>
#include "Cage.h"

Cage::Cage() {
    ID = 0;
    name = "";
}                 

Cage::Cage(std::string newName, int newNumber) {
    ID = newNumber;
    name = newName;
}

std::string Cage::getName() {
    return name;
}

int Cage::getIDnum() {
    return ID;
}

Cage::~Cage() {
    std::cout << "" << std::endl;
}