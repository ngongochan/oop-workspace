#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <string>

class AirCraft {
    protected:
        int weight;                  // the weight of AirCraft
        float fuel;                  // fuel percentage, initially 100%
        int numberOfFlights;         // initially 0
    public:
        AirCraft();
        AirCraft(int w);             // creates an Aircraft with weight w

        int get_weight();
        void set_weight(int weight);

        float get_fuel();
        void set_fuel(float fuel);

        int get_numberOfFlights();
        void set_numberOfFlights(int numberOfFlights);

        void refuel();               // Resets fuel back to 100%
        virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
};

#endif