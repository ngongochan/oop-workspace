#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main() {
    
    // testing default constructor
    TV T1;
    std::cout << "The power rating of this appliance is " << T1.get_powerRating() << ", it has a screensize of " << T1.getScreenSize() << ", and it is " << T1.get_isOn() << std::endl;
    
    T1.turnOn();
    std::cout << "The power rating of this appliance is " << T1.get_powerRating() << ", it has a screensize of " << T1.getScreenSize() << ", and it is " << T1.get_isOn() << std::endl;

    // testing constructor with parameters
    TV T2(100, 50);
    std::cout << "The power rating of this appliance is " << T2.get_powerRating() << ", it has a screensize of " << T2.getScreenSize() << ", and it is " << T2.get_isOn() << std::endl;

    T2.setScreenSize(1250);
    T2.set_powerRating(64);

    std::cout << "The power rating of this appliance is " << T2.get_powerRating() << ", it has a screensize of " << T2.getScreenSize() << ", and it is " << T2.get_isOn() << ". Its power consumption is " << T2.getPowerConsumption() << std::endl;
}