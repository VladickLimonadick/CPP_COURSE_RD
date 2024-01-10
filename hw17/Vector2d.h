#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <cmath>

class Vector2d {
private:
    float x;
    float y;
    static int instanceCount;

public:
    Vector2d();
    Vector2d(float xVal, float yVal);

    ~Vector2d();

    Vector2d& operator=(const Vector2d& other);

    Vector2d operator+(const Vector2d& secondVector) const;
    Vector2d operator-(const Vector2d& secondVector) const;

    friend Vector2d operator+(const Vector2d& leftVector, const Vector2d& rightVector);
    friend Vector2d operator-(const Vector2d& leftVector, const Vector2d& rightVector);

    float operator()() const;

    float& operator[](int i);

    void print() const;

    void input();

    static int getInstanceCount();
};

#endif
