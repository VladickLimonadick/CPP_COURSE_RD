#include <iostream>

long long fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    else if (n <= 2) {
        return 1;
    }
    else {
        long long a = 1, b = 1, result = 0;
        for (int i = 3; i <= n; ++i) {
            result = a + b;
            a = b;
            b = result;
        }
        return result;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of the Fibonacci sequence element(maximum 191): ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    }
    else {
        long long result = fibonacci(n);
        std::cout << "The value of Fibonacci element " << n << " is: " << result << std::endl;
    }

    return 0;
}