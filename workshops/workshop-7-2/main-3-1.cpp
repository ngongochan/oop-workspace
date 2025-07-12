#include <iostream>
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"

int main() {
    House myHouse(4);

    TV T1(64, 50);

    Fridge F1(50, 100);

    Appliance A1(150);

    Appliance A2(160);

    myHouse.addAppliance(&T1);
    myHouse.addAppliance(&F1);
    myHouse.addAppliance(&A1);
    myHouse.addAppliance(&A2);

    std::cout << appliances[1].get_powerRating() << std::endl;

    // int totalPowerConsumption = myHouse.get_totalPowerConsumption();

}