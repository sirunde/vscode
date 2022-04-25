#ifndef POINT_H
#define POINT_H
#include <string>

class Point
{
private:
    double x, y; // coordinates

public:
    Point(double xx, double yy);
    void setX(double xx);
    double getX() const;

    void setY(double yy);
    double getY() const;

    std::string toString() const;
};

#endif
