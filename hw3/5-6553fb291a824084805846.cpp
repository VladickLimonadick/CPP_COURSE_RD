#include <iostream>
#include <cmath>

int main() {
    // 5 завдання. Працюємо з cmath, std::pow, Обраховуємо площу та довжину кола О.О
    double radius;

    // Зчитування радіуса кола з клавіатури
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Використання числа π
    const double pi = 3.14159265358979323846;

    // Обчислення площі та довжини кола
    double area = pi * std::pow(radius, 2);
    double circumference = 2 * pi * radius;

    // Виведення результатів
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}
