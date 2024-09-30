/*
* File Name: shape.h
* Assignment: Lab 2 Exercise B
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 25 September 2025
*/

#ifndef shape_h
#define shape_h

#include "point.h"

class Shape {
private:
    char* shapeName;
    
protected:
    Point origin;

public:
    Shape(double x, double y, const char* name);
    Shape(const Point& p, const char* name);
    Shape(const Shape& other);
    Shape& operator=(const Shape& other);
    virtual ~Shape();

    // Getters
    const Point& getOrigin() const;
    const char* getName() const;

    // Display coordinates
    virtual void display() const;

    // Distance between two points
    double distance(const Shape& other) const;
    static double distance(const Shape& s1, const Shape& s2);

    // Change shape position
    void move(double dx, double dy);
};

#endif /* shape_h */
