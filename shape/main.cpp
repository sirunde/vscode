#include "Point.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"
#include <iostream>

int main(){
    Point p1(2,6);
    Point p2(1,4);
    Point p3(3,3);
    Point p4(4,5);

    Point p5(5,3);
    Point p6(5,0);
    Point p7(8,0);

    Point p8(5,3);
    Point p9(6,1);
    Point p10(8,0);

    std::vector<Shape*> shapelist;

    Triangle tri1(p5,p6,p7);

    Triangle tri2(p8,p9,p10);

    Rectangle Rec(p1,p2,p3,p4);
    shapelist.push_back(&Rec);
    shapelist.push_back(&tri1);
    shapelist.push_back(&tri2);

    
    for(Shape* shape:shapelist){

        std::cout << typeid(shape).name() << shape->toString() << std::endl
        << "Area: " << shape->calcArea() << std::endl;

        
    }

}