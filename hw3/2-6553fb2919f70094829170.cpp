#include <iostream>

int main() {
    //2 завдання.Використовуємо if, else та оператори порівняння
    int num1, num2, num3;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    int amount = num1 + num2 + num3;
    int multiply = num1 * num2 * num3;
    double average = static_cast<double>(amount) / 3;

    // Виведення результатів
    std::cout << "Amount: " << amount << std::endl;
    std::cout << "Multiply: " << multiply << std::endl;
    std::cout << "Average: " << average << std::endl;

    // Порівняння першого числа з другим та другого з третім
    if (num1 == num2) {
        std::cout << "The first number is equal to the second one." << std::endl;
    }
    else {
        std::cout << "The first number is not equal to the second one." << std::endl;
    }

    if (num2 == num3) {
        std::cout << "The second number is equal to the third one." << std::endl;
    }
    else {
        std::cout << "The second number is not equal to the third one." << std::endl;
    }

    return 0;
}
