#include "printNaturalNumbersLoop.h"
#include <iostream>

void printNaturalNumbersDescendingLoop(int count) {
    if (count <= 0) {
        std::cout << "Please enter a positive integer for count.\n";
        return;
    }

    std::cout << "The natural numbers in descending order are: ";
    for (int i = count; i >= 1; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void printNaturalNumbersAscendingLoop(int count) {
    if (count <= 0) {
        std::cout << "Please enter a positive integer for count.\n";
        return;
    }

    std::cout << "The natural numbers in ascending order are: ";
    for (int i = 1; i <= count; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
