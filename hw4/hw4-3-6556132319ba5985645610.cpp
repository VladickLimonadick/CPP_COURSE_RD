#include <iostream>

int main() {
    int number;

    std::cout << "Enter number: ";
    std::cin >> number;

    // ����������, �� ����� ������� ������ �� 5 �� 11 ���������
    if (number % 5 == 0 && number % 11 == 0) {
        std::cout << "Number " << number << " divisible by 5 and 11 at the same time." << std::endl;
    }
    else {
        std::cout << "Number " << number << " do not divide the whole by 5 and 11 at the same time." << std::endl;
    }

    return 0;
}
