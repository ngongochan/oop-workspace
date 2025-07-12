#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(int newID) {
    ID = newID;
}

int Vehicle::getID() {
    return ID;
}