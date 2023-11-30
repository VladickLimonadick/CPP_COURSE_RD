#include "printNaturalNumbersLoop.h"
#include "printNaturalNumbersRecursive.h"
#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of natural numbers to print: ";
    std::cin >> n;

    printNaturalNumbersDescendingLoop(n);
    printNaturalNumbersAscendingLoop(n);
    printNaturalNumbersDescendingRecursive(n, n);
    printNaturalNumbersAscendingRecursive(n);

    return 0;
}