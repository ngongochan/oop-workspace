#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus : public Vehicle {
    public:
        int getParkingDuration() {
            return timeOfEntry * 0.75;
        }
};

#endif