#pragma once
#include "rectangle.hpp"
using namespace std;

class Square : public Rectangle
{
private:
	string shape = "Square";
public:
	explicit Square(double side);
	string getShape() override;
};