#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape
{
private:
    /* data */
public:
    Rectangle();
    Rectangle(Point& p1, Point& p2, Point& p3, Point& p4);

    virtual void addPoint(Point & point) override;
    virtual double calcArea() override;
    
    virtual ~Rectangle() = default;
};


#endif