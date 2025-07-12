#include "Airplane.h"
#include <string>
using namespace std;

        Airplane::Airplane() {

        }
        
        Airplane::Airplane(int w, string n) {
            weight = w;
            name = n;
            numberOfFlights = 0;
            fuel = 100;
        }     // creates a Helicopter with weight w and name n


        void Airplane::fly(int headwind, int minutes) {
            float remainingFuel;

            if (headwind >= 40) {
                remainingFuel = fuel-(0.4*minutes)-(0.01*(weight-5670)*minutes);
                    if (remainingFuel < 20) {
                        remainingFuel = fuel;
                    }
                numberOfFlights++;
                fuel = remainingFuel;
                
            } else if (headwind < 40) {
                remainingFuel = fuel-(0.2*minutes)-(0.01*(weight-5670)*minutes);
                    if (remainingFuel < 20) {
                        remainingFuel = fuel;
                    }
                numberOfFlights++;
                fuel = remainingFuel;

            fuel = remainingFuel; 
            }
            
        }

        string Airplane::get_name() {
            return name;
        }