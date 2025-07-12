#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    private:
        double screenSize;
    public:
        TV();
        TV(int, double);

        double getScreenSize();
        void setScreenSize(double);

        double getPowerConsumption();
};

#endif