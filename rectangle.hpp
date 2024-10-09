#pragma once
#ifndef RECTANGLE_HPP
#include "shapes.hpp"

class Rectangle : public Shape
{
    private:
        double width;
        double height;
    
    public:
        explicit Rectangle(double width, double height);
        double getArea() override;
        double getPerimeter() override;
};
#endif