#pragma once
#ifndef RIGHTTRIANGLE_HPP
#include "shapes.hpp"

using namespace std;

class RightTriangle : public Shape
{
      public:
        double width;
        double height;
        explicit RightTriangle();
        explicit RightTriangle(double width, double height);
        double getArea() override;
        double getPerimeter() override;
};
#endif