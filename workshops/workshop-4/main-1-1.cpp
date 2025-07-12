#include <iostream>

extern int* readNumbers();
extern void printNumbers(int *, int);

int main() {
    int *a = readNumbers();
    printNumbers(a, 10);
    delete[] a;
}