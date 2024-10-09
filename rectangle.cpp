#include "rectangle.hpp"

<<<<<<< Updated upstream
Rectangle::Rectangle(double length, double width)
=======
using namespace std;

Rectangle::Rectangle(double width, double height)
>>>>>>> Stashed changes
{
    this->width = width;
    this->height = height;
}

double Rectangle::getArea()
{
    return (width * height);
}

double Rectangle::getPerimeter()
{
    return (2 * (width + height));
}