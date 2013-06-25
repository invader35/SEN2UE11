///////////////////////////////////////
// Workfile    : Picture.h
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Picture header
// Remarks     : -
// Revision    : 0
//////////////////////////////////////

#ifndef PICTURE_H
#define PICTURE_H

#include "GraphicObject.h"
#include <vector>

class Picture : public GraphicObject {

    std::vector<GraphicObject *> mElements;

public:
    Picture();
    ~Picture();
    void Add(GraphicObject* Element);
    virtual void draw();
    virtual TBox getBoundingBox() const;
    size_t getNumOfElements() const;

protected:
    virtual void moveToHelper(TCoord const &position);
};

#endif PICTURE_H