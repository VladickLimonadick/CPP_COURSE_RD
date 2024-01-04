#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float height;

public:
    // Constructors
    Rectangle(); // Default constructor
    Rectangle(float len, float hei); // Constructor with parameters

    // Methods
    float getArea() const;
    float getPerimeter() const;
};

#endif
