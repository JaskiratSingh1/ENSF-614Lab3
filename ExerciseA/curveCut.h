/*
* File Name: curveCut.h
* Assignment: Lab 3 Exercise A
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 2 October 2024
*/

#ifndef curveCut_h
#define curveCut_h

#include "rectangle.h"
#include "circle.h"

class CurveCut:public Rectangle, public Circle {
public:
    CurveCut(double x, double y, double sideA, double sideB, double radius, const char* name);
    virtual ~CurveCut();
    
    double area() const;
    double perimeter() const;
    
    virtual void display() const;
};


#endif /* curveCut_h */
