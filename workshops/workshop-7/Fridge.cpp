#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge() {
    volume = 0;
    powerRating = 0;
}
               
Fridge::Fridge(int powerRating, double volume) {
    this->powerRating = powerRating;
    this->volume = volume;
}

double Fridge::getVolume() {
    return volume;
}

void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getPowerConsumption() {
    return powerRating*24*(volume/100);
}