#include "printNaturalNumbersRecursive.h"
#include <iostream>

void printNaturalNumbersDescendingRecursive(int count, int current) {
    if (count <= 0) {
        std::cout << std::endl;
        return;
    }

    if (count == current) {
        std::cout << "The natural numbers in descending order are: ";
    }

    std::cout << current << " ";
    printNaturalNumbersDescendingRecursive(count - 1, current - 1);
}
