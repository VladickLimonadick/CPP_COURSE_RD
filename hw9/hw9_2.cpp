#include <iostream>
#include <cstring>

// Function to convert Latin characters to uppercase
void toUppercase(char str[]) {
    int length = std::strlen(str);

    for (int i = 0; i < length; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main() {
    const int maxStringLength = 100;
    char str[maxStringLength];

    std::cout << "Enter text (maximum 100 characters in Latin) : ";
    std::cin.getline(str, maxStringLength);

    // Calling a function to convert characters to uppercase
    toUppercase(str);

    std::cout << "Converted text: " << str << std::endl;

    return 0;
}