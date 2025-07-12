#include <iostream>
#include "Appliance.h"
#include "TV.h"

int main() {
    
    // testing default constructor
    TV T1;
    std::cout << "The power rating of this appliance is " << T1.getPowerRating() << ", it has a screensize of " << T1.getScreensize() << ", and it is " << T1.getIsOn() << std::endl;
    
    T1.turnOn();
    std::cout << "The power rating of this appliance is " << T1.getPowerRating() << ", it has a screensize of " << T1.getScreensize() << ", and it is " << T1.getIsOn() << std::endl;

    // testing constructor with parameters
    TV T2(100, 50);
    std::cout << "The power rating of this appliance is " << T2.getPowerRating() << ", it has a screensize of " << T2.getScreensize() << ", and it is " << T2.getIsOn() << std::endl;

    T2.setScreensize(1250);
    T2.setPowerRating(64);

    std::cout << "The power rating of this appliance is " << T2.getPowerRating() << ", it has a screensize of " << T2.getScreensize() << ", and it is " << T2.getIsOn() << ". Its power consumption is " << T2.getPowerConsumption() << std::endl;
}