#include "rectangle.cpp"
#include "circle.cpp"
#include "rightTriangle.cpp"
#include "square.cpp"
#include "isocelesRightTriangle.cpp"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string printAreaToScreen(Shape* s) {
    string shapeName = s->getShape();
    string shapeArea = to_string(s->getArea());
    string shapePerim = to_string(s->getPerimeter());
    return "Shape: " + shapeName + "\nArea: " + shapeArea + "\nPerimeter " + shapePerim + "\n";
}

void squareCreate()
{
    double side;
    cout << "\nPlease enter the length of the sides:\n";
    cin >> side;

    Shape* squ = new Square(side);
    cout << printAreaToScreen(squ);
}

void isocelesRightTriangleCreate()
{
    double side;
    cout << "\nPlease enter the length of the sides:\n";
    cin >> side;

    Shape* isoTri = new IsocelesRightTriangle(side);
    cout << printAreaToScreen(isoTri);
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
    cout << printAreaToScreen(rect);
}

void circleCreate()
{
    double radius;
    cout << "\nPlease enter the radius:\n";
    cin >> radius;

    Shape* circ = new Circle(radius);
    cout << printAreaToScreen(circ);
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
    cout << printAreaToScreen(tRig);
}

int main(void)
{
    char temp = '0';
    bool anotherPls = 1;
    while (anotherPls != 0) {
        cout << "\nPlease enter the character of the shape you want to create:\nLEGEND:\nC: Circle\nR: Rectangle\nS: Square\nT: Right Triangle\nI: Isosceles Triangle\n";
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
            else if (temp != 'C' && temp != 'R' && temp != 'S' || temp != 'T' || temp != 'I' || temp != 'P')
            {
                cout << "ERROR: Please enter a valid character.\n";
            }
        }
        while (cout << "\nWould you like to enter another shape?\nPress 1 to enter another shape, or 0 to exit.\n" && !(cin >> anotherPls)) {
            cin.clear();
            cin.ignore();
            cout << "ERROR: Please enter a valid number.\n" << endl;
        }
    }

    cout << "Goodbye!\n";
}