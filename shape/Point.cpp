#include "Point.h"
#include <sstream>

Point::Point(double xx, double yy){
    Point::setX(xx);
    Point::setY(yy);
}


// set and get X
void Point::setX(double xx){
    x = xx;
}
double Point::getX()const{
    return x;
}

// set and get Y
void Point::setY(double yy){
    y = yy;
}
double Point::getY()const{
    return y;
}

std::string Point::toString() const{
    std::ostringstream output;
    output << "P(" << x << ", " << y <<") ";
    return output.str();

}
