#include <iostream>

extern int array_mean(int [], int);

int main(){
    int array[5] = {1, 22, 333, 4444, 55555};
    int result = array_mean(array, 5);
    std::cout << result;
}