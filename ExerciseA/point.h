/*
* File Name: point.h
* Assignment: Lab 3 Exercise A
* Completed by: Jaskirat Singh (Jazz), Frank Ma
* Submission Date: 2 October 2024
*/

#ifndef point_h
#define point_h

class Point {
private:
    double xCoordinate;
    double yCoordinate;
    int id;
    static int count;
    static int id_counter;
    
public:
    Point(double xValue, double yValue);
    Point(const Point& rhs);
    Point& operator=(const Point& rhs);
    ~Point();
    
    // Getters
    double getx() const;
    double gety() const;
    int getID() const;
    
    // Setters
    void setx(double x_value);
    void sety(double y_value);

    // display and counter methods
    void display() const;
    static int counter();
    
    // Distance methods
    double distance(const Point& other) const;
    static double distance(const Point& p1, const Point& p2);
};


#endif /* point_h */
