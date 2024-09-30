/*
* File Name: square.cpp
* Assignment: Lab 2 Exercise B
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 25 September 2025
*/

#include <iostream>
#include "square.h"

using namespace std;

Square::Square(double x, double y, double side, const char* name)
    : Shape(x, y, name), side_a(side) {}

Square::~Square() {}

double Square::area() const {
    return side_a * side_a;
}

double Square::perimeter() const {
    return 4 * side_a;
}

double Square::get_side_a() const {
    return side_a;
}

void Square::set_side_a(double side) {
    side_a = side;
}

void Square::display() const {
    cout << "Square Name: " << getName() << endl;
    // Print x, y coords
    origin.display();
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
