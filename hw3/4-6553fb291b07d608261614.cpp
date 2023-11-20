#include <iostream>

int main() {
    // 4 завдання. Практика з double
    double width, height;

    // Зчитування ширини та висоти прямокутника з клавіатури
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;

    // Обчислення площі та периметра прямокутника
    double area = width * height;
    double perimeter = 2 * (width + height);

    // Виведення результатів
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}