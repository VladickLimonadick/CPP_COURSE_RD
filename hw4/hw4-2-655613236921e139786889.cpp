#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // ������������� ��������� �������� ��� ����������� ������
    int minNum = (num1 < num2) ? num1 : num2;

    // �������� �������� �����
    std::cout << "Minimum number: " << minNum << std::endl;

    return 0;
}
