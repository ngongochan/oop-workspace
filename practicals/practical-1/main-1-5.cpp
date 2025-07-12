#include <iostream>

extern int count_evens(int);

int main() {
    int result = count_evens(11);
    std::cout << result;
}