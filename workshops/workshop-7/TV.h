#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
    private:
        double screensize;
    public:
        TV();
        TV(int, double);

        double getScreensize();
        void setScreensize(double);

        double getPowerConsumption();
};

#endif