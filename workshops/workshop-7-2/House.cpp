#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

    
    House::House() {}


    House::House(int numAppliances) {
        appliances = new Appliance*[numAppliances];
        currentNumAppliances = 0;
    }


    House::~House() {
        delete[] appliances;
    }


    bool House::addAppliance(Appliance* appliance) {
        if (currentNumAppliances < numAppliances) {
            appliances[currentNumAppliances] = appliance;
            currentNumAppliances++;
            return true;
        }
        return false;
    }    


    // double House::get_totalPowerConsumption() {
    //     int totalPowerConsumption = 0;
    //     for (int i = 0; i < numAppliances; i++) {
    //         totalPowerConsumption += appliance[i]->getPowerConsumption();
    //         return totalPowerConsumption;
    //     }
    // }