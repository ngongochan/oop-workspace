#include "Cage.h"
#include "Clinic.h"

Clinic::Clinic() {
    maxNumber = 0;
}

Clinic::Clinic(std::string name, int max_size) {
    cageName = name;
    maxNumber = max_size;
}


// Cage * getCages();                      

Cage *getCages() {
    Cage *a = new Cage[10];
    return a;
}

Cage *cageArray = getCages();


// returns the number of cages currently in the the clinic
int Clinic::getNumber_of_cages() {
    ;
}                   

std::string Clinic::getName() {
    return cageName;
}
       
bool Clinic::addCage(Cage new_cage) {
    if (Clinic::getNumber_of_cages() < maxNumber) {
        return true;
    } else {
        return false;
    }
}
            
Clinic::~Clinic() {

}