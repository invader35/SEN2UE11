///////////////////////////////////////
// Workfile    : GraphicObject.h
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Graphic Object header
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#include "GraphicObject.h"


GraphicObject::GraphicObject() {

}


GraphicObject::~GraphicObject() {

}


void GraphicObject::moveToHelper(TCoord const &position){
    mPosition = position;
}

TCoord GraphicObject::getPositionHelper() const{
    return mPosition;
}

void GraphicObject::printTCoord(TCoord position){
    std::cout << "(" << position.first << "," << position.second << ")";
}

void GraphicObject::printTBox(TBox box){
    std::cout << "(";
    printTCoord(box.first);
    std::cout << ",";
    printTCoord(box.second);
    std::cout << ")";
}