#pragma once
#ifndef SQUARE_HPP
#include"rectangle.hpp"

class Square : public Rectangle
{
    private:
        double width;
        double height;
    
    public:
        explicit Square(double side);
        double getArea() override;
        double getPerimeter() override;
};
#endif