#pragma once
#ifndef CIRCLE_HPP
#include "shapes.hpp"

using namespace std;

class Circle : public Shape
{
    private:
        double radius;
        string shape = "Circle";

    public:
        explicit Circle(double radius);
        string getShape() override;
        double getArea() override;
        double getPerimeter() override;
};
#endif