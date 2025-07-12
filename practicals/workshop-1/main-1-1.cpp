#include <iostream>
extern int array_sum(int [], int n); 

int main() {
    int array[5] = {1, 22, 333, 4444, 55555};
    int result = array_sum(array, 5);
    std::cout << result;
}