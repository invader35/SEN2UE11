///////////////////////////////////////
// Workfile    : GraphicObject.h
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Graphic Object header
// Remarks     : -
// Revision    : 0
///////////////////////////////////////

#ifndef GRAPHOBJ_H
#define GRAPHOBJ_H

#include "object.h"
#include "Types.h"
#include <iostream>

class GraphicObject : public Object {

protected:
    TCoord mPosition;

public:
    
    virtual ~GraphicObject();
    virtual void draw() = 0;
    virtual TBox getBoundingBox() const = 0;
    
    TCoord getPosition() const {
        return getPositionHelper();
    }

    void moveTo(TCoord const &position){
        moveToHelper(position);
    }

    void printTBox(TBox box);
    void printTCoord(TCoord position);

protected:
    GraphicObject();
    virtual TCoord getPositionHelper() const;
    virtual void moveToHelper(TCoord const &position);
};

#endif GRAPHOBJ_H