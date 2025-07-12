#include <iostream>

extern double arrayMin(double [], int);

int main() {
    double array[] = {0, -1, 2, -3, 4};
    std::cout << arrayMin(array, 4);
}