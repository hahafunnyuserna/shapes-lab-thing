#pragma once
#ifndef RECTANGLE_HPP
#include "shapes.hpp"
using namespace std;


class Rectangle : public Shape
{
    public:
        double width;
        double height;
        Rectangle();
        Rectangle(double width, double height);
        double getArea() override;
        double getPerimeter() override;
};
#endif