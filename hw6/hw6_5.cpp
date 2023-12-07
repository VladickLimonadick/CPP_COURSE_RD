#include <iostream>
#include <cctype>

int main() {
    char input;
    int digitSum = 0;

    while (true) {
        std::cout << "Enter a character (enter '.' to exit): ";
        std::cin >> input;

        if (input == '.') {
            std::cout << "Exiting the program." << std::endl;
            break;
        }

        if (std::islower(input)) {
            char upperCase = std::toupper(input);
            std::cout << "Uppercase version: " << upperCase << std::endl;
        }
        else if (std::isdigit(input)) {
            int digitValue = input - '0';
            digitSum += digitValue;
            std::cout << "Current digit sum: " << digitSum << std::endl;
        }
        else {
            std::cout << "This character is not processed by the program." << std::endl;
        }
    }

    return 0;
}
