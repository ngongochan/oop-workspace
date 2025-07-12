#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirCraft.h"
#include <string>
using namespace std;

class Airplane : public AirCraft {
    private:
        string name;                    // name of the Helicopter
    public:
        Airplane();
        Airplane(int w, string n);     // creates a Helicopter with weight w and name n

        void fly(int headwind, int minutes);

        string get_name();
};

#endif