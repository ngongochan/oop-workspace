// std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight): 
// Returns a random position within a grid represented by gridWidth and gridHeight as a std::tuple<int, int>.
// double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2):
// Returns the Euclidean distance between two positions given as pos1 and pos2 as a double.

#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>
#include <tuple>
#include <cmath>

class Utils {
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
            return std::make_tuple(rand() % (gridWidth + 1), rand() % (gridHeight + 1));
        }

        // distance = sqrt((x2-x1)^2 + (y2-y1)^2)
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
            // return sqrt((std::get<0>(pos1)-std::get<0>(pos2))^2+(std::get<1>(pos1)-std::get<1>(pos2))^2);
            // DO NOT use ^2
            return sqrt((std::get<0>(pos1)-std::get<0>(pos2)) * (std::get<0>(pos1)-std::get<0>(pos2))+(std::get<1>(pos1)-std::get<1>(pos2))*(std::get<1>(pos1)-std::get<1>(pos2)));
        }
};

#endif