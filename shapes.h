#ifndef SHAPES_H
#define SHAPES_H

#include <cstring>

class Shape
{
public:
    virtual double area() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    double area() const override
    {
        return 3.1416 * radius * radius;
    }
};

class Square : public Shape
{
    double side;

public:
    Square(double s) : side(s) {}
    double area() const override
    {
        return side * side;
    }
};

class Rectangle : public Shape
{
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override
    {
        return width * height;
    }
};

#endif
