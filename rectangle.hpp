#pragma once
#ifndef RECTANGLE_HPP
#include "shapes.hpp"

using namespace std;

class Rectangle : public Shape
{
    private:
        string shape = "Rectangle";
        
    public:
        double width=0;
        double height=0;
        explicit Rectangle();
        explicit Rectangle(double width, double height);
        double getArea() override;
        double getPerimeter() override;
        string getShape() override;
};
#endif