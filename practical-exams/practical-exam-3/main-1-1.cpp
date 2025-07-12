#include <iostream>
#include "AirCraft.h"

using namespace std;

int main() {
    AirCraft A1(100);
    cout << "Weight: " << A1.get_weight() << " Fuel: " << A1.get_fuel() << " Number of Flights: " << A1.get_numberOfFlights() << endl;

    AirCraft A2(200);
    A2.set_fuel(50);
    A2.set_numberOfFlights(10);
    cout << "Weight: " << A2.get_weight() << " Fuel: " << A2.get_fuel() << " Number of Flights: " << A2.get_numberOfFlights() << endl;
}