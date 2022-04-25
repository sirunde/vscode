#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{
private:
    /* data */
public:
    Triangle(/* args */);
    Triangle(Point&p1, Point& p2, Point& p3);

    virtual void addPoint(Point & point) override;
    virtual double calcArea() override;
    
    virtual ~Triangle() =default;
};
#endif
