#include <iostream>

// A function for comparing two strings
bool isEqual(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return false;
        }
        ++i;
    }
    if (str1[i] != '\0' || str2[i] != '\0') {
        return false;
    }
    return true;
}

int main() {
    const int maxStringLength = 200;
    char str1[maxStringLength];
    char str2[maxStringLength];

    std::cout << "Enter the first string: ";
    std::cin.getline(str1, maxStringLength);

    std::cout << "Enter the second line: ";
    std::cin.getline(str2, maxStringLength);

    // Call the function to compare strings
    bool result = isEqual(str1, str2);

    if (result) {
        std::cout << "Lines are equal." << std::endl;
    }
    else {
        std::cout << "lines are not equal." << std::endl;
    }
    return 0;
}