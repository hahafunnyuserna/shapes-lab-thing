#pragma once
#include "isocelesRightTriangle.hpp"
using namespace std;

IsocelesRightTriangle::IsocelesRightTriangle(double side)
{
    this->width = side;
    this->height = side;
}

string IsocelesRightTriangle::getShape()
{
    return shape;
}