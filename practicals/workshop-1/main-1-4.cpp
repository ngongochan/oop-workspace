#include <iostream>

extern int sum_two_arrays(int [], int [], int);

int main() {
    int array[5] = {11, 10, 4, 7, 14}; 
    int secondarray[5] = {5, 6, 4, 9, 4}; 
    std::cout << sum_two_arrays(array, secondarray, 5);
}