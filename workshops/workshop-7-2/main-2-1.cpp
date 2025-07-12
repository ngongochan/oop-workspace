#include <iostream>
#include "Appliance.h"
#include "Fridge.h"

int main() {
    
    // testing default constructor
    Fridge F1;
    std::cout << "The power rating of this appliance is " << F1.get_powerRating() << ", it has a volume of " << F1.getVolume() << ", and it is " << F1.get_isOn() << std::endl;
    
    F1.turnOn();
    std::cout << "The power rating of this appliance is " << F1.get_powerRating() << ", it has a volume of " << F1.getVolume() << ", and it is " << F1.get_isOn() << std::endl;

    // testing constructor with parameters
    Fridge F2(100, 50);
    std::cout << "The power rating of this appliance is " << F2.get_powerRating() << ", it has a volume of " << F2.getVolume() << ", and it is " << F2.get_isOn() << ". Its power consumpution is " << F2.getPowerConsumption() << "." << std::endl;

    F2.setVolume(1250);
    F2.set_powerRating(64);

    std::cout << "The power rating of this appliance is " << F2.get_powerRating() << ", it has a volume of " << F2.getVolume() << ", and it is " << F2.get_isOn() << ". Its power consumpution is " << F2.getPowerConsumption() << "." << std::endl;
}