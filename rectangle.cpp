#include <iostream>
#include "rectangle.hpp"

using namespace std;

Rectangle::Rectangle(double length, double width)
{
    this->length = length;
    this->width = width;
}

double Rectangle::getArea()
{
    return (length * width);
}

double Rectangle::getPerimiter()
{
    return (2 * (length + width));
}