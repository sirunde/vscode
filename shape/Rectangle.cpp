#include "Rectangle.h"
#include <stdexcept>
#include <iostream>
#include <math.h>

Rectangle::Rectangle(Point & p1, Point& p2, Point& p3, Point& p4){
    addPoint(p1);
    addPoint(p2);
    addPoint(p3);
    addPoint(p4);
}

Rectangle::Rectangle(){
    
}

void Rectangle::addPoint(Point& point){
    if (getPointList().size() >4){
        std::cout << "You cannot add more points" << std::endl;
    }
    else{
        getPointList().push_back(point);

    }
}

double Rectangle::calcArea(){
    double sd1= ((getPointList()[1].getX()-getPointList()[0].getX())*(getPointList()[1].getX()-getPointList()[0].getX())+(getPointList()[1].getY()-getPointList()[0].getY())*(getPointList()[1].getY()-getPointList()[0].getY()));
    double sd2= ((getPointList()[3].getX()-getPointList()[2].getX())*(getPointList()[3].getX()-getPointList()[2].getX())+(getPointList()[3].getY()-getPointList()[2].getY())*(getPointList()[3].getY()-getPointList()[2].getY()));

    sd1 = sqrt(sd1);
    sd2 = sqrt(sd2);
    return sd1*sd2;
}