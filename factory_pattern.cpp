#include <cstdio>
#include "shapes.h"

int main()
{
    Shape *circle = ShapeFactory::createShape("circle", 3);
    Shape *square = ShapeFactory::createShape("square", 4);
    Shape *rectangle = ShapeFactory::createShape("rectangle", 3, 5);

    printf("Circle area: %.4f\n", circle->area());
    printf("Square area: %.4f\n", square->area());
    printf("Rectangle area: %.4f\n", rectangle->area());

    delete circle;
    delete square;
    delete rectangle;

    return 0;
}
