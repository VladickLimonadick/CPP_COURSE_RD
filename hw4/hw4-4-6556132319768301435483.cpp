#include <iostream>

int main() {
    int angle1, angle2, angle3;

    std::cout << "Enter the value of the first angle: ";
    std::cin >> angle1;

    std::cout << "Enter the value of the second angle: ";
    std::cin >> angle2;

    std::cout << "Enter the value of the third angle: ";
    std::cin >> angle3;

    // Перевіряємо, чи сума кутів дорівнює 180 градусам
    if (angle1 + angle2 + angle3 == 180) {
        std::cout << "The entered angles form a triangle." << std::endl;
    }
    else {
        std::cout << "The entered angles do not form a triangle." << std::endl;
    }

    return 0;
}
