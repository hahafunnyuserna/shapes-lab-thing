#pragma once
#include <cmath>
#include "rightTriangle.hpp"

using namespace std;

RightTriangle::RightTriangle(){}
RightTriangle::RightTriangle(double width, double height)
{
    this->width = width;
    this->height = height;
}

double RightTriangle::getArea()
{
    return (0.5 * width * height);
}

double RightTriangle::getPerimeter()
{
    return (width + height + sqrt((width * width) + (height * height)));
}

string RightTriangle::getShape()
{
    return shape;
}