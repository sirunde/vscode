#include <stdexcept>
#include "Triangle.h"
#include <iostream>

Triangle::Triangle(){

}

Triangle::Triangle(Point& p1, Point& p2, Point& p3){
    addPoint(p1);
    addPoint(p2);
    addPoint(p3);
}

double Triangle::calcArea(){
    double y1 = getPointList()[1].getY()-getPointList()[2].getY();
    double y2 = getPointList()[2].getY()-getPointList()[0].getY();
    double y3 = getPointList()[0].getY()-getPointList()[1].getY();


    double area = (1.0/2.0)*((getPointList()[0].getX()*y1)+(getPointList()[1].getX()*y2)+(getPointList()[2].getX()*y3));
    return area;
}

void Triangle::addPoint(Point & point){
    if (getPointList().size() > 3){
        std::cout << "You cannot add more points" << std::endl;
    }
    else{
        getPointList().push_back(point);

    }
}