#pragma once
#ifndef SHAPES_HPP
#include <string>

using namespace std;

class Shape
{
    public:
        virtual double getArea() = 0;
        virtual double getPerimeter() = 0;
        virtual string getShape() = 0;
};
#endif