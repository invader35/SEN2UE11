///////////////////////////////////////
// Workfile    : Rectangle.h
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Circle header
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "GraphicObject.h"
class Rectangle : public GraphicObject {

private:
    TCoord mExtent;

public:
    Rectangle();
    Rectangle(TCoord mPos, TCoord mExt);
    ~Rectangle();
    virtual TBox getBoundingBox() const;
    virtual void draw();
};

#endif RECTANGLE_H