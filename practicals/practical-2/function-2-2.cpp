#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    
    int binary = 0;
    
    for (int i = 0; i < number_of_digits; i++) {
        for (int j = number_of_digits; j > 0; j--) {
        binary += binary_digits[i] * (10^j);
        }
    }
    return binary;
}