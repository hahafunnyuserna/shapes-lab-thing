#include "shapes.hpp"

class Rectangle : public Shape
{
    private:
        double length;
        double width;
    
    public:
        explicit Rectangle(double length, double width);
        double getArea() override;
        double getPerimiter() override;
};