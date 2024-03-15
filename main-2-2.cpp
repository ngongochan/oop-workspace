#include <iostream>

extern int binary_to_int(int [], int);

int main(){
    int array[3] = {1,1,1};
    std::cout << binary_to_int(array, 3);
}