#include <iostream>

int main() {
    double firstElement, step;
    int numberOfValues;

    std::cout << "Enter the first element of the arithmetic progression: ";
    std::cin >> firstElement;

    std::cout << "Enter the number of values in the arithmetic progression: ";
    std::cin >> numberOfValues;

    std::cout << "Enter the step of the arithmetic progression: ";
    std::cin >> step;

    std::cout << "Arithmetic progression: ";
    for (int i = 0; i < numberOfValues; ++i) {
        std::cout << firstElement + i * step << " ";
    }

    return 0;
}
