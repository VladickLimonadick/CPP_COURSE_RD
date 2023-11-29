#include <iostream>

int main() {
    int size;

    std::cout << "Enter the size: ";
    std::cin >> size;

    // a.
    std::cout << "a." << std::endl;
    for (int i = size; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // b.
    std::cout << "b." << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // c.
    std::cout << "c." << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // d.
    std::cout << "d." << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int k = 0; k < i; ++k) {
            std::cout << " ";
        }
        for (int j = 0; j < size; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // e.
    std::cout << "b." << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << ((i + j) % 2);
        }
        std::cout << std::endl;
    }

    return 0;
}