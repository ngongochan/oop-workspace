#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"
#include <string>

using namespace std;

int main() {
    Helicopter H1(100, "Helicopter1");
    cout << "Weight: " << H1.get_weight() << " Fuel: " << H1.get_fuel() << " Number of Flights: " << H1.get_numberOfFlights() << endl;

    Helicopter H2(5690, "Helicopter2");
    cout << "Name: " << H2.get_name() << " Weight: " << H2.get_weight() << " Fuel: " << H2.get_fuel() << " Number of Flights: " << H2.get_numberOfFlights() << endl;

    H2.fly(45, 10);
    cout << "Name: " << H2.get_name() << " Weight: " << H2.get_weight() << " Fuel: " << H2.get_fuel() << " Number of Flights: " << H2.get_numberOfFlights() << endl;
}