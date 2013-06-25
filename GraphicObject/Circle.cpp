///////////////////////////////////////
// Workfile    : Circle.cpp
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Circle implementation
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#include "Circle.h"


Circle::Circle() {
}

Circle::Circle(TCoord mPos, TUnit radius){
    mPosition = mPos;
    mRadius = radius;
}

Circle::~Circle() {
}

TBox Circle::getBoundingBox() const {
    TCoord corner(mRadius + mPosition.first, mPosition.second);
    return TBox(mPosition, corner);
}

void Circle::draw(){
    std::cout << "Circle::draw() middle at ";
    printTCoord(mPosition);
    std::cout << " with radius " << mRadius << std::endl;
}
