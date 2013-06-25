///////////////////////////////////////
// Workfile    : Main.cpp
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Test driver
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#include <iostream>
#include "Rectangle.h"
#include "Circle.h"
#include "Line.h"
#include "Picture.h"

using namespace std;

int main(){

    TCoord linePos(2, 3);
    TCoord lineExt(3, 5);
    Line l1(linePos, lineExt);
    l1.draw();
    cout << "Line::boundingbox";
    l1.printTBox(l1.getBoundingBox());
    
    cout << endl << endl;

    TCoord rectPos(4,5);
    TCoord rectExtent(9,8);
    Rectangle r1(rectPos, rectExtent);
    r1.draw();
    cout << "Rectangle::boundingbox";
    r1.printTBox(r1.getBoundingBox());

    cout << endl << endl;

    TCoord circlePos(10, 11);
    TUnit circleRadius = 15;
    Circle c1(circlePos, circleRadius);
    c1.draw();
    cout << "Circle::boundingbox";
    c1.printTBox(c1.getBoundingBox());

    GraphicObject* g1 = &l1;
    GraphicObject* g2 = &r1;
    GraphicObject* g3 = &c1;
    
    TCoord circlePos1(67, 17);
    TUnit circleRadius1 = 6;
    Circle *c2 = new Circle(circlePos1, circleRadius1);

    cout << endl << endl;
    cout << "Picture Test" << endl;
    

    Picture p1;
    p1.Add(g1);
    p1.Add(g2);
    p1.Add(g3);
    p1.Add(c2);

    p1.draw();
    cout << "Picture::boundingbox";
    p1.printTBox(p1.getBoundingBox());

    cout << endl << endl;
    cout << "Picture in Picture Test" << endl;


    Picture p2;
    GraphicObject* g4 = &p1;
    p2.Add(g1);
    p2.Add(g4);

    p2.draw();
    cout << "Picture::boundingbox";
    p2.printTBox(c1.getBoundingBox());




    delete c2;

    cin.get();
    return 0;
}