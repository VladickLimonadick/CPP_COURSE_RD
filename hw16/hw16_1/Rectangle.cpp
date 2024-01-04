#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0.0), height(0.0) {}

// Constructor with parameters
Rectangle::Rectangle(float len, float hei) : length(len), height(hei) {}

// Method to calculate area
float Rectangle::getArea() const {
    return length * height;
}

// Method to calculate perimeter
float Rectangle::getPerimeter() const {
    return 2 * (length + height);
}