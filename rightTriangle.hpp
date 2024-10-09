#pragma once
#ifndef RIGHTTRIANGLE_HPP
#include "shapes.hpp"

using namespace std;

class RightTriangle : public Shape
{
    private:
        double width;
        double height;
    
    public:
        explicit RightTriangle(double width, double height);
        double getArea() override;
        double getPerimeter() override;
};
#endif