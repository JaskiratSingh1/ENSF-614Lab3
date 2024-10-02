/*
* File Name: curveCut.cpp
* Assignment: Lab 3 Exercise A
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 2 October 2024
*/

#include <iostream>
#include "curveCut.h"

using namespace std;

CurveCut::CurveCut(double x, double y, double sideA, double sideB, double radius, const char* name) :
    Shape(x, y, name), Rectangle(x, y, sideA, sideB, name), Circle(x, y, radius, name) {
    if(radius > sideA || radius > sideB) {
        cerr << "The radius must be less than or equal to the smaller of the width and length." << endl;
        exit(1);
    }
}

CurveCut::~CurveCut() {}

double CurveCut::area() const {
    // Circle always overlaps by 25% with the rectangle, given the radius constraints
    return Rectangle::area() - (0.25 * Circle::area());
}

double CurveCut::perimeter() const {
    // Derived equation by looking at the sample image. Remove 2xradius and add 1/4 of circle perimeter
    return Rectangle::perimeter() - (2 * Circle::getRadius()) + (0.25 * Circle::perimeter());
}

void CurveCut::display() const {
    cout << "CurveCut Name: " << Shape::getName() << endl;
    // Print x, y coords
    Rectangle::origin.display();
    cout << "Width: " << Rectangle::get_side_a() << endl;
    cout << "Length: " << Rectangle::get_side_b() << endl;
    cout << "Radius of the cut: " << Circle::getRadius() << endl;
}
