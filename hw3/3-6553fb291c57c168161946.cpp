#include <iostream>

int main() {
    //3 завдання. Вчимося працювати з bool і операторами порівняння

    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Оголошення та ініціалізація булевих змінних
    bool lessThan = (num1 < num2);
    bool equal = (num1 == num2);
    bool moreThan = (num1 > num2);
    bool lessOrEqual = (num1 <= num2);

    std::cout << "lessThan: " << lessThan << std::endl;
    std::cout << "equal: " << equal << std::endl;
    std::cout << "moreThan: " << moreThan << std::endl;
    std::cout << "lessOrEqual: " << lessOrEqual << std::endl;

    // тернарний оператор для конвертації значення типу bool в рядок
    std::cout << "lessThan: " << (lessThan ? "true" : "false") << std::endl;
    std::cout << "equal: " << (equal ? "true" : "false") << std::endl;
    std::cout << "moreThan: " << (moreThan ? "true" : "false") << std::endl;
    std::cout << "lessOrEqual: " << (lessOrEqual ? "true" : "false") << std::endl;

    return 0;
}
