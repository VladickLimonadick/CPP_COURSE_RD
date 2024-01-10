#include "Vector2d.h"

int Vector2d::instanceCount = 0;

Vector2d::Vector2d() : x(0.0), y(0.0) {
    instanceCount++;
}

Vector2d::Vector2d(float xVal, float yVal) : x(xVal), y(yVal) {
    instanceCount++;
}

Vector2d::~Vector2d() {
    instanceCount--;
}

Vector2d& Vector2d::operator=(const Vector2d& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

Vector2d Vector2d::operator+(const Vector2d& secondVector) const {
    return Vector2d(x + secondVector.x, y + secondVector.y);
}

Vector2d Vector2d::operator-(const Vector2d& secondVector) const {
    return Vector2d(x - secondVector.x, y - secondVector.y);
}

float Vector2d::operator()() const {
    return std::sqrt(x * x + y * y);
}

float& Vector2d::operator[](int i) {
    if (i == 0) return x;
    else if (i == 1) return y;
    throw std::out_of_range("Index out of range");
}

void Vector2d::print() const {
    std::cout << "{" << x << "; " << y << "}";
}

void Vector2d::input() {
    std::cin >> x >> y;
}

int Vector2d::getInstanceCount() {
    return instanceCount;
}

Vector2d operator+(const Vector2d& leftVector, const Vector2d& rightVector) {
    return Vector2d(leftVector.x + rightVector.x, leftVector.y + rightVector.y);
}

Vector2d operator-(const Vector2d& leftVector, const Vector2d& rightVector) {
    return Vector2d(leftVector.x - rightVector.x, leftVector.y - rightVector.y);
}
