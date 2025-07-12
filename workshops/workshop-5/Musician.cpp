#include <iostream>
#include "Musician.h"

Musician::Musician() {
    std::string instrument = "null";
    int experience = 0;
}

Musician::Musician(std::string new_instrument, int new_experience) {
    instrument = new_instrument;
    experience = new_experience;
}

std::string Musician::get_instrument() {
    return instrument;
}
    
int Musician::get_experience() {
    return experience;
};