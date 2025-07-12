#include <iostream>

extern void modifyArray(double [], int, double);

int main() {
    double array[] = {1, 2, 3, 4};
    modifyArray(array, 4, 10);
}