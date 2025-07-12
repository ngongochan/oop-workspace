#ifndef VEHICLE_H
#define VEHICLE_H
#include <chrono>

class Vehicle {
    protected:
        std::time_t timeOfEntry;
        int ID;

    public:
        Vehicle(int newID);
        int getParkingDuration() {
            return timeOfEntry;
        }
        int getID();
};

#endif