#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testPositiveAndNegativeIntegers() {
        Addition addition;
        if (addition.add(-10, 10) != 0) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }


    void testZeros() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testSpecialCases() {
        Addition addition;
        if (addition.add(-1, 1) != 0) {
            std::cout << "Test 5 failed!" << std::endl;
        }
    }

    void testBigPositiveIntegers() {
        Addition addition;
        if (addition.add(12345, 98765) != 111110) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }

    void testBigNegativeIntegers() {
        Addition addition;
        if (addition.add(-12345, -98765) != -111110) {
            std::cout << "Test 7 failed!" << std::endl;
        }
    }
};

#endif