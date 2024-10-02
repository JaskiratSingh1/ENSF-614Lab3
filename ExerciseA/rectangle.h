/*
* File Name: rectangle.h
* Assignment: Lab 3 Exercise A
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 2 October 2024
*/

#ifndef rectangle_h
#define rectangle_h

#include "square.h"

class Rectangle : public Square {
private:
    double side_b;

public:
    Rectangle(double x, double y, double side_a, double side_b, const char* name);
    Rectangle(const Rectangle& other);
    Rectangle& operator=(const Rectangle& other);
    virtual ~Rectangle();

    // Shape features
    double area() const;
    double perimeter() const;

    // Second side getter and setter
    double get_side_b() const;
    void set_side_b(double side);

    // Display method
    virtual void display() const;
};

#endif /* rectangle_h */
