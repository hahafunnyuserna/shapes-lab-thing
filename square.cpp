#pragma once
#include "square.hpp"
using namespace std;

Square::Square(double side)
{
    this->width = side;
    this->height = side;
}

string Square::getShape()
{
    return shape;
}