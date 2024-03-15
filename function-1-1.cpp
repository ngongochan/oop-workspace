#include <iostream>

int sum_diagonal(int array[4][4]) {
    int diagonal = 0;

    for (int i = 0; i < 4; i++) {
        diagonal += array[i][i];
    }

    return diagonal;
}