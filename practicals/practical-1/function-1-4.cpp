#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {
    if (n < 1) {
        return 0;
    }
    int sum[n];
    for (int i = 0; i < n; i++) {
        sum[i] = array[i] + secondarray[i];      
    }
    return sum[n];
}