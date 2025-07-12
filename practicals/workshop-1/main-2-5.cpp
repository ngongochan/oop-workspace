#include <iostream>

extern int is_descending(int [], int);

int main() {
    int array[3] = {-1, 0, 1};
    std::cout << is_descending(array, 3);
}