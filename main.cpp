#pragma once
#include "rectangle.hpp"
#include "circle.hpp"
#include "rightTriangle.hpp"
#include "square.hpp"
#include "isocelesRightTriangle.hpp"
#include <iostream>
#include <string>

using namespace std;

string printAreaToScreen(Shape* s) {
    string shapeName = s->getShape();
    string shapeArea = to_string(s->getArea());
    string shapePerim = to_string(s->getPerimeter());
    return "Shape: " + shapeName + "\nArea: " + shapeArea + "\nPerimeter : " + shapePerim;
}

void squareCreate()
{
    double side;
    cout << "\nPlease enter the length of the sides:\n";
    cin >> side;
    Shape* squ = new Square(side);
    cout << "The area is " << squ->getArea() << ".\nThe perimeter is " << squ->getPerimeter() << ".\n";
}

void isocelesRightTriangleCreate()
{
    double side;
    cout << "\nPlease enter the length of the sides:\n";
    cin >> side;
    Shape* isoTri = new IsocelesRightTriangle(side);
    cout << "The area is " << isoTri->getArea() << ".\nThe perimeter is " << isoTri->getPerimeter() << ".\n";
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
    bool anotherPls = 1;
    while (anotherPls != 0) {
        cout << "Please enter the character of the shape you want to create:\nLEGEND:\nC: Circle\nR: Rectangle\nS: Square\nT: Right Triangle\nI: Isosceles Triangle\nB: Best Shapes\n";
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
            else if (temp == 'I') {
                isocelesRightTriangleCreate();
                break;
            }
            else if (temp == 'B') {
                Shape* unitCirc = new Circle(1);
                Shape* unitSqu = new Square(1);
                Shape* thirtysixtyninetyTri = new RightTriangle(1, sqrt(3));
                Shape* fortyfivefortyfiveTri = new IsocelesRightTriangle(1);
                cout << printAreaToScreen(unitSqu) << endl << printAreaToScreen(unitCirc) << endl << printAreaToScreen(thirtysixtyninetyTri) << endl << printAreaToScreen(fortyfivefortyfiveTri);
                break;
            }
            else if (temp != 'C' && temp != 'R' && temp != 'S' || temp != 'T' || temp != 'I' || temp != 'P')
            {
                cout << "ERROR: Please enter a valid character.\n";
            }
        }
        while (cout << "\nWould you like to enter another shape?\nPress 1 to enter another Shape.\nPress 0 to Exit." && !(cin >> anotherPls)) {
            cin.clear();
            cin.ignore();
            cout << "Invalid input detected.. Please Try again." << endl;
        }
    }
    return 0;
}