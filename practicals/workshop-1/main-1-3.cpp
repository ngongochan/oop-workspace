#include <iostream>

extern int num_count(int [], int, int);

int main() {
    int number = 64;
    int array[8] = {64, 64, 11, 10, 4, 7, 14, 9}; 
    int result = num_count(array, 8, 64);
    std::cout << "There are " << result << " number(s) in the array equal to the given number.";
}