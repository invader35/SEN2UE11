///////////////////////////////////////
// Workfile    : Rectangle.cpp
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Rectangle implementation
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#include "Rectangle.h"

Rectangle::Rectangle(){
}

Rectangle::Rectangle(TCoord mPos, TCoord mExt){
    mPosition = mPos;
    mExtent = mExt;
}

Rectangle::~Rectangle(){
}

TBox Rectangle::getBoundingBox() const {
    return TBox(mPosition, mExtent);
}

void Rectangle::draw(){
    std::cout << "Rectangle::draw() has corner at";
    printTCoord(mPosition);
    std::cout << " another corner at ";
    printTCoord(mExtent);
    std::cout << std::endl;
}
