#pragma once
#include "rectangle.hpp"
using namespace std;

Rectangle::Rectangle() {}
Rectangle::Rectangle(double width, double height)
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

string Rectangle::getShape()
{
    return shape;
}