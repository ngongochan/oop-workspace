#include <iostream>

extern void hexDigits(int *, int);
extern int* readNumbers();

int main() {
    int *a = readNumbers();
    hexDigits(a, 4);
}