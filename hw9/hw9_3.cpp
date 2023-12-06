#include <iostream>
#include <cstring>
#include <cctype>

// A function to check if a string is a palindrome
bool isPalindrome(const char str[]) {
    int length = std::strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        while (start < length && !isalpha(str[start])) {
            ++start;
        }
        while (end >= 0 && !isalpha(str[end])) {
            --end;
        }
        if (start < end && tolower(str[start]) != tolower(str[end])) {
            return false;
        }
        ++start;
        --end;
    }
    return true; // It is a palindrome
}

int main() {
    const int maxStringLength = 100;
    char str[maxStringLength];

    std::cout << "Enter text : ";
    std::cin.getline(str, maxStringLength);

    bool result = isPalindrome(str);

    if (result) {
        std::cout << "Result:true (palindrome)" << std::endl;
    }
    else {
        std::cout << "Result:false (not a palindrome)" << std::endl;
    }

    return 0;
}
