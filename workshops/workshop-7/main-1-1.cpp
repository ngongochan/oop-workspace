#include <iostream>
#include "Appliance.h"

int main() {

    // testing default constructor
    Appliance A1;
    std::cout << "The power rating of this appliance is " << A1.getPowerRating() << " and it is " << A1.getIsOn() << std::endl;
    
    A1.turnOn();
    std::cout << "The power rating of this appliance is " << A1.getPowerRating() << " and it is " << A1.getIsOn() << std::endl;

    // testing constructor with parameters
    Appliance A2 (100);

    std::cout << "The power rating of this appliance is " << A2.getPowerRating() << " and it is " << A2.getIsOn() << std::endl;
}