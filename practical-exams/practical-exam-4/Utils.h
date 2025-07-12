#ifndef UTILS_H
#define UTILS_H

#include <cstdlib>
#include <tuple>
#include <cmath>

class Utils {
    protected:
        // static std::tuple<int, int> position; 
    public:
        static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
            // return std::make_tuple(rand() % (gridWidth - 0 + 1), rand() % (gridHeight - 0 + 1));
            return std::make_tuple(0, 0);
        }

        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
            return sqrt((std::get<0>(pos1)-std::get<0>(pos2)) * (std::get<0>(pos1)-std::get<0>(pos2))+(std::get<1>(pos1)-std::get<1>(pos2))*(std::get<1>(pos1)-std::get<1>(pos2)));
        }
};

#endif