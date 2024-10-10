#include "rectangle.hpp"
#include "circle.hpp"
#include "rightTriangle.hpp"
#include "square.hpp"
#include <iostream>

using namespace std;

void squareCreate()
{
    double side;
    cout << "\nPlease enter the length of the sides:\n";
    cin >> side;
    Shape* squ = new Square(side);
    cout << "The area is " << squ->getArea() << ".\nThe perimeter is " << squ->getPerimeter() << ".\n";
}


void rectangleCreate()
{
    double side1;
    double side2;
    cout << "\nPlease enter the width:\n";
    cin >> side1;
    cout << "Please enter the height:\n";
    cin >> side2;

    Shape* rect = new Rectangle(side1, side2);
    cout << "The area is " << rect->getArea() << ".\nThe perimeter is " << rect->getPerimeter() << ".\n";
}

void circleCreate()
{
    double radius;
    cout << "\nPlease enter the radius:\n";
    cin >> radius;

    Shape* circ = new Circle(radius);
    cout << "The area is " << circ->getArea() << ".\nThe perimeter is " << circ->getPerimeter() << ".\n";
}

void rightTriangleCreate()
{
    double side1;
    double side2;
    cout << "\nPlease enter the width:\n";
    cin >> side1;
    cout << "Please enter the height:\n";
    cin >> side2;

    Shape* tRig = new RightTriangle(side1, side2);
    cout << "The area is " << tRig->getArea() << ".\nThe perimeter is " << tRig->getPerimeter() << ".\n";
}

int main(void)
{
    char temp = '0';
    cout << "Please enter the character of the shape you want to create:\nLEGEND:\nC: Circle\nR: Rectangle\nS: Square\nT: Right Triangle\nI: Isosceles Triangle\n";
    while (temp != 'C' && temp != 'R' && temp != 'S' || temp != 'T' || temp != 'I')
    {
        cin >> temp;
        temp = toupper(temp);
        if (temp == 'R')
        {
            rectangleCreate();
            break;
        }
        else if (temp == 'C') {
            circleCreate();
            break;
        }
        else if (temp == 'T') {
            rightTriangleCreate();
            break;
        }
        else if (temp == 'S') {
            squareCreate();
            break;
        }
        else if (temp != 'C' && temp != 'R' && temp != 'S' || temp != 'T' || temp != 'I')
        {
            cout << "ERROR: Please enter a valid character.\n";
        }
    }
}