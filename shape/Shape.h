#ifndef SHAPE_H
#define SHAPE_H
#include <vector>
#include "Point.h"
class Shape
{
private:
    /* data */
    std::vector<Point> pointList;
public:
    Shape() = default;
    virtual ~Shape() = default;
    void setPointList(std::vector<Point>& pList);
    std::vector<Point>& getPointList();
    virtual void addPoint(Point& point);
    std::string toString();
    virtual double calcArea() = 0;

};


#endif