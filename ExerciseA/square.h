/*
* File Name: square.h
* Assignment: Lab 2 Exercise B
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 25 September 2025
*/

#ifndef square_h
#define square_h

#include "shape.h"

class Square : public Shape {
private:
    double side_a;

public:
    Square(double x, double y, double side, const char* name);
    virtual ~Square();

    // Shape features
    double area() const;
    double perimeter() const;

    // Get and set first side
    double get_side_a() const;
    void set_side_a(double side);

    // Display function
    virtual void display() const;
};


#endif /* square_h */
