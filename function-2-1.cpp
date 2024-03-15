#include <iostream>
#include <string>
using namespace std;

void print_binary_str(std::string str_decimal_number) {
    
    int int_decimal_number = std::stoi(str_decimal_number);
        
    int binary_number_array[9] = {0};

    int i = 8;

    while (int_decimal_number > 0) {
        binary_number_array[i--] = int_decimal_number % 2;
        int_decimal_number /= 2;
    }
    
    for (int i = 0; i < 9; i++) {
        cout << binary_number_array[i];
        cout << endl;
    }
}