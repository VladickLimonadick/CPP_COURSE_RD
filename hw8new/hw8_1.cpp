#include <iostream>

void countNumbers(int n) {
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < n; ++i) {
        int num;

        // Перевірка на введення цілого числа
        while (true) {
            std::cout << "Enter number " << i + 1 << ": ";
            std::cin >> num;

            if (std::cin.fail()) {
                std::cin.clear();  // Скидаємо прапорець помилки
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Очищуємо буфер введення
                std::cout << "Invalid input. Please enter a valid integer.\n";
            } else {
                break;  // Введено допустиме значення, виходимо з циклу
            }
        }

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    std::cout << "Positive: " << positiveCount << ", negative: " << negativeCount << ", zeroes: " << zeroCount << std::endl;
}

int main() {
    int n;

    // Перевірка на введення цілого числа
    while (true) {
        std::cout << "Enter the number of elements: ";
        std::cin >> n;

        if (std::cin.fail() || n <= 0) {
            std::cin.clear();  // Скидаємо прапорець помилки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Очищуємо буфер введення
            std::cout << "Invalid input. Please enter a valid positive integer.\n";
        } else {
            break;  // Введено допустиме значення, виходимо з циклу
        }
    }

    countNumbers(n);

    return 0;
}
