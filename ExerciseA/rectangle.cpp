/*
* File Name: rectangle.cpp
* Assignment: Lab 2 Exercise B
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 25 September 2025
*/

#include <iostream>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, double side_a, double side_b, const char* name)
    : Square(x, y, side_a, name), side_b(side_b) {}

Rectangle::Rectangle(const Rectangle& other) : Square(other), side_b(other.side_b) {}

Rectangle& Rectangle::operator=(const Rectangle& other) {
    if (this != &other) {
        Square::operator=(other);
        side_b = other.side_b;
    }
    return *this;
}

Rectangle::~Rectangle() {}

double Rectangle::area() const {
    return get_side_a() * side_b;
}

double Rectangle::perimeter() const {
    return 2 * (get_side_a() + side_b);
}

double Rectangle::get_side_b() const {
    return side_b;
}

void Rectangle::set_side_b(double side) {
    side_b = side;
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << endl;
    //Print x, y coords
    origin.display();
    cout << "Side a: " << get_side_a() << endl;
    cout << "Side b: " << side_b << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
