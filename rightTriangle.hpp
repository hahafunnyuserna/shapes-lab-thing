#pragma once
#ifndef RIGHTTRIANGLE_HPP
#include "shapes.hpp"

using namespace std;

class RightTriangle : public Shape
{
    private:
        string shape = "Right Triangle";

    public:
        double width=0;
        double height=0;
        explicit RightTriangle();
        explicit RightTriangle(double width, double height);
        double getArea() override;
        double getPerimeter() override;
        string getShape() override;
};
#endif