#define _USE_MATH_DEFINES
#include <cmath>
#include "circle.hpp"
using namespace std;

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::getArea()
{
    return (M_PI *(radius * radius));
}

double Circle::getPerimeter()
{
    return (M_PI * 2 * radius);
}
