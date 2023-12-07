#include <iostream>

int factorial(int count) {
    if (count == 0 || count == 1) {
        return 1;
    }
    else {
        return count * factorial(count - 1);
    }
}

int main() {
    int n;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers.\n";
    }
    else {
        std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;
    }

    return 0;
}