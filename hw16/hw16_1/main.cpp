#include <iostream>
#include "Rectangle.h"

int main() {
    Rectangle rectangle1;
    Rectangle rectangle2(5.0, 3.0);

    std::cout << "Rectangle 1 - Area: " << rectangle1.getArea() << ", Perimeter: " << rectangle1.getPerimeter() << std::endl;
    std::cout << "Rectangle 2 - Area: " << rectangle2.getArea() << ", Perimeter: " << rectangle2.getPerimeter() << std::endl;

    return 0;
}