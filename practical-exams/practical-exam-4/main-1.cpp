#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include <tuple>
#include <iostream>

int main() {
    std::tuple<int, int> position1 = Utils::generateRandomPos(8, 8);
    std::tuple<int, int> position2 = Utils::generateRandomPos(8, 8);

    double distance = Utils::calculateDistance(position1, position2);

    std::cout << "The first position has the coordinates of "
    << std::get<0>(position1) << " and " << std::get<1>(position1)
    << std::endl;

    std::cout << "The second position has the coordinates of "
    << std::get<0>(position2) << " and " << std::get<1>(position2)
    << std::endl;

    std::cout << "The distance between the two positions is "
    << distance << std::endl;
}