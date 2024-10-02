/*
* File Name: circle.h
* Assignment: Lab 3 Exercise A
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 2 October 2024
*/

#ifndef circle_h
#define circle_h

#include "shape.h"

class Circle : public virtual Shape {
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

#endif /* circle_h */
