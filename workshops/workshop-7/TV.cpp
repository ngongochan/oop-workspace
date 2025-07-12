#include "Appliance.h"
#include "TV.h"

TV::TV() {
    screensize = 0;
    powerRating = 0;
}
               
TV::TV(int powerRating, double screensize) {
    this->powerRating = powerRating;
    this->screensize = screensize;
}

double TV::getScreensize() {
    return screensize;
}

void TV::setScreensize(double screensize) {
    this->screensize = screensize;
}

double TV::getPowerConsumption() {
    return powerRating*(screensize/10);
}