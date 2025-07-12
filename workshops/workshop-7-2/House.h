#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
    private:
        int numAppliances = 5;
        int currentNumAppliances;
        Appliance** appliances;
    public:
        House();
        House(int numAppliances);
        ~House();

        bool addAppliance(Appliance* appliance);

        double get_totalPowerConsumption();
};

#endif