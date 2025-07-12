#include "AirCraft.h"

    AirCraft::AirCraft() {

    }
    
    AirCraft::AirCraft(int w) {
        weight = w;
        fuel = 100;
        numberOfFlights = 0;
    };             // creates an Aircraft with weight w

    int AirCraft::get_weight() {
        return weight;
    }

    void AirCraft::set_weight(int weight) {
        this->weight = weight;
    }

    float AirCraft::get_fuel() {
        return fuel;
    }

    void AirCraft::set_fuel(float fuel) {
        this->fuel = fuel;
    }

    int AirCraft::get_numberOfFlights() {
        return numberOfFlights;
    }

    void AirCraft::set_numberOfFlights(int numberOfFlights) {
        this->numberOfFlights = numberOfFlights;
    }

    void AirCraft::refuel() {
        fuel = 100;
    }               // Resets fuel back to 100%

    void AirCraft::fly(int headwind, int minutes) {
        numberOfFlights++;
    } // headwind in km/h and minutes (time flying)