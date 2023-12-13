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

void printNaturalNumbersDescendingRecursive(int count, int current, bool isFirstCall = true) {
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

void printNaturalNumbersAscendingRecursive(int count, int current = 1, bool isFirstCall = true) {
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
