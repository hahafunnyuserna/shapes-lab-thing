#pragma once
#include "rightTriangle.hpp"

using namespace std;

class IsocelesRightTriangle : public RightTriangle
{
    private:
    	string shape = "Isoceles Right Triangle";
    public:
    	explicit IsocelesRightTriangle(double side);
    	string getShape() override;
};