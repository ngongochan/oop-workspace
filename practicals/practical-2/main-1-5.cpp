#include <iostream>

extern void print_summed(int [3][3], int [3][3]);

int main() {
    int array1[3][3] = {{0,1,2}, {3,4,5}, {6,7,8}};
    int array2[3][3] = {{6,7,8}, {0,1,2}, {3,4,5}};
    print_summed(array1, array2);
}