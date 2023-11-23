#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        return 1;
    }

    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;

    return 0;
}
