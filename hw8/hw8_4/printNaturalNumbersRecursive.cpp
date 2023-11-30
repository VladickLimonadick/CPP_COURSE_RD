#include "printNaturalNumbersRecursive.h"
#include <iostream>

void printNaturalNumbersDescendingRecursive(int count, int current, bool isFirstCall) {
    if (count <= 0) {
        std::cout << std::endl;
        return;
    }

    if (isFirstCall) {
        std::cout << "The natural numbers in descending order are: ";
    }

    std::cout << current << " ";
    printNaturalNumbersDescendingRecursive(count - 1, current - 1, false);
}

void printNaturalNumbersAscendingRecursive(int count, int current, bool isFirstCall) {
    if (current > count) {
        std::cout << std::endl;
        return;
    }

    if (isFirstCall) {
        std::cout << "The natural numbers in ascending order are: ";
    }

    std::cout << current << " ";
    printNaturalNumbersAscendingRecursive(count, current + 1, false);
}
