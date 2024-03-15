#include <iostream>

extern sum_diagonal(int [4][4]);

int main() {
    int array[4][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,0,1}, {2,3,4,5}};
    std::cout << sum_diagonal(array);
    return 0;
}