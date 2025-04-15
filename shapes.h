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

// Shape Factory
class ShapeFactory
{
public:
    static Shape *createShape(const char *type, double a, double b = 0)
    {
        if (strcmp(type, "circle") == 0)
            return new Circle(a);
        if (strcmp(type, "square") == 0)
            return new Square(a);
        if (strcmp(type, "rectangle") == 0)
            return new Rectangle(a, b);
        return nullptr;
    }
};

#endif
