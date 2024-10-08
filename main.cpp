#include "rectangle.cpp"
#include <cassert>
#include <iostream>

using namespace std;

int main(void)
{
    double side1;
    double side2;
    cout << "Please enter the length:\n";
    cin >> side1;
    cout << "Please enter the width:\n";
    cin >> side2;
    Shape *rect = new Rectangle(side1, side2);
    cout << "The area is " << rect->getArea() << ".\nThe perimeter is " << rect->getPerimiter() << ".\n";
    

}

