#include <iostream>

void hexDigits(int *numbers, int length) {
    std::string hex;

    for (int i = 0; i < length; i++) {
        switch (numbers[i]) {
            case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
            hex = "numbers[i]";
            break;
            case 10:
            hex = "A";
            break;
            case 11:
            hex = "B";
            break;
            case 12:
            hex = "C";
            break;
            case 13:
            hex = "D";
            break;
            case 14:
            hex = "E";
            break;
            case 15:
            hex = "F";
            break;
        }
        std::cout << i << " " << numbers[i] << " " << hex;
    }
}