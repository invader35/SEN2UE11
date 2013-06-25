///////////////////////////////////////
// Workfile    : Line.h
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Line header
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#ifndef LINE_H
#define LINE_H

#include "GraphicObject.h"


class Line : public GraphicObject {

private:
    TCoord mExtent;

public:
    Line();
    Line(TCoord mPos, TCoord mExt);
    ~Line();
    virtual TBox getBoundingBox() const;
    virtual void draw();
};

#endif LINE_H