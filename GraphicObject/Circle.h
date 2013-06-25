///////////////////////////////////////
// Workfile    : Circle.h
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Circle header
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#ifndef CIRCLE_H
#define CIRCLE_H

#include "GraphicObject.h"

class Circle :public GraphicObject {

private:
    TUnit mRadius;

public:
    Circle();
    Circle(TCoord mPos, TUnit radius);
    ~Circle();
    virtual void draw();
    virtual TBox getBoundingBox() const;
};

#endif CIRCLE_H