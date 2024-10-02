/*
* File Name: shape.cpp
* Assignment: Lab 3 Exercise A
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 2 October 2024
*/

#include <iostream>
#include <cstring>
#include "shape.h"

using namespace std;

// Constructor
Shape::Shape(double x, double y, const char* name) : origin(x, y) {
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

// Constructor
Shape::Shape(const Point& p, const char* name) : origin(p) {
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

// Copy constructor
Shape::Shape(const Shape& other) : origin(other.origin) {
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);
}

// Assignment operator
Shape& Shape::operator=(const Shape& other) {
    if(this != &other) {
        delete[] shapeName;
        shapeName = new char[strlen(other.shapeName) + 1];
        strcpy(shapeName, other.shapeName);
        origin = other.origin;
    }
    return *this;
}

// Shape destructor
Shape::~Shape() {
    delete[] shapeName;
}

// Origin getter
const Point& Shape::getOrigin() const {
    return origin;
}

// Name getter
const char* Shape::getName() const {
    return shapeName;
}

// Display shape name and coordinates
void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    origin.display();
}

// Get distance
double Shape::distance(const Shape& other) const {
    return origin.distance(other.origin);
}

// Get distance
double Shape::distance(const Shape& s1, const Shape& s2) {
    return Point::distance(s1.origin, s2.origin);
}

// Move shape
void Shape::move(double dx, double dy) {
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}
