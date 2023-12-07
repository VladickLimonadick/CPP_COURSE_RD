#include <iostream>
#include <cctype>

// Counting the number of vowels and consonants of letters
void parseStringLetters(const char str[], int& vowelsCount, int& consonantsCount) {
    vowelsCount = 0;
    consonantsCount = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        // Ignore non-alphabetic characters
        if (isalpha(str[i]) && islower(str[i])) {
            char currentChar = tolower(str[i]); // Convert to lowercase for comparison
            // Checking whether the vowel is vowel
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
                ++vowelsCount;
            }
            else {
                ++consonantsCount;
            }
        }
    }
}

int main() {
    const int maxStringLength = 100;
    char str[maxStringLength];

    std::cout << "Enter text to check the number of vowels and consonants: ";
    std::cin.getline(str, maxStringLength);

    int vowelsCount, consonantsCount;

    // Call the function to count vowels and consonants
    parseStringLetters(str, vowelsCount, consonantsCount);

    std::cout << "Number of vowels: " << vowelsCount << std::endl;
    std::cout << "Number of consonants: " << consonantsCount << std::endl;

    return 0;
}