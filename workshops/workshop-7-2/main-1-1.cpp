#include <iostream>
#include "Appliance.h"

int main() {

    // testing default constructor
    Appliance A1;
    std::cout << "Initial power rating: " << A1.get_powerRating() << std::endl;
    
    A1.turnOn();
    std::cout << "The power rating of this appliance is " << A1.get_powerRating() << " and it is " << A1.get_isOn() << std::endl;

    // testing constructor with parameters
    Appliance A2 (100);

    std::cout << "The power rating of this appliance is " << A2.get_powerRating() << " and it is " << A2.get_isOn() << std::endl;
}