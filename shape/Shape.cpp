#include "Shape.h"
#include <sstream>

void Shape::addPoint(Point& point){
    pointList.push_back(point);
}

std::string Shape::toString(){
    std::ostringstream output;
    for(Point& point : pointList){

        output << point.toString();

    }
    return output.str();
}

void Shape::setPointList(std::vector<Point>& pList){
    pointList = pList;
}

std::vector<Point>& Shape::getPointList(){
    return pointList;
}