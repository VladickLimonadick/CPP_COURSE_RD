#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter third number: ";
    std::cin >> num3;

    // ��������� ����������� �����
    int maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }

    if (num3 > maxNum) {
        maxNum = num3;
    }

    // �������� ����������� �����
    std::cout << "Maximum number: " << maxNum << std::endl;

    return 0;
}
