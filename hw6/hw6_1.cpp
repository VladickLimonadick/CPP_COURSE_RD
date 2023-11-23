#include <iostream>

int main() {
    double firstElement, step, lastElement;

    std::cout << "Enter the first element of the arithmetic progression: ";
    std::cin >> firstElement;

    std::cout << "Enter the step of the arithmetic progression: ";
    std::cin >> step;

    std::cout << "Enter the number of the last element of the arithmetic progression: ";
    std::cin >> lastElement;

    // Вивід елементів арифметичної прогресії
    std::cout << "Arithmetic progression: ";
    for (double i = firstElement; i <= lastElement; i += step) {
        std::cout << i << " ";
    }

    return 0;
}
