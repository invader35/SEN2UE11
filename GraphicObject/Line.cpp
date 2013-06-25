///////////////////////////////////////
// Workfile    : Line.cpp
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Line implementation
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#include "Line.h"


Line::Line() {
}

Line::Line(TCoord mPos, TCoord mExt){
    mPosition = mPos;
    mExtent = mExt;
}

Line::~Line() {
}

TBox Line::getBoundingBox() const {
    return TBox(mPosition, mExtent);
}

void Line::draw(){
    std::cout << "Line::draw() begins at ";
    printTCoord(mPosition);
    std::cout << " goes until ";
    printTCoord(mExtent);
    std::cout << std::endl;
}