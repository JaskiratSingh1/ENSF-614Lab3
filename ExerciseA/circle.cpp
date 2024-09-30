/*
* File Name: circle.cpp
* Assignment: Lab 3 Exercise A
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 2 October 2025
*/

#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double x, double y, double radius, const char* name);
    virtual ~Circle();

    // Shape features
    double area() const;
    double perimeter() const;

    // Second side getter and setter
    double getRadius() const;
    void setRadius(double radius);

    // Display method
    virtual void display() const;
};

Circle::Circle(double x, double y, double radius, const char* name): Shape(x, y, name), radius(radius) {
    // Ensure that radius is positive
    if(radius < 0) {
        cerr << "Cannot have negative radius!" << endl;
        exit(1);
    }
}

Circle::~Circle() {};

double Circle::area() const {
    // Area = pi * r^2
    return M_PI * radius * radius;
}

double Circle::perimeter() const {
    // Circumference = 2 * pi * r
    return 2 * M_PI * radius;
}

// Getter
double Circle::getRadius() const {
    return radius;
}

// Setter
void Circle::setRadius(double radius) {
    // Ensure that radius is positive
    if(radius < 0) {
        cerr << "Cannot have negative radius!" << endl;
        exit(1);
    }
    this->radius = radius;
}

// Display function
void Circle::display() const {
    cout << "Circle Name: " << getName() << endl;
    // Print x, y coords
    origin.display();
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
