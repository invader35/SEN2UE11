///////////////////////////////////////
// Workfile    : Object.h
// Author      : Matthias Schett
// Date        : 23-06-2013
// Description : Object header
// Remarks     : -
// Revision    : 0
///////////////////////////////////////

#ifndef OBJ_H
#define OBJ_H

class Object {
public:
    Object(){}
    virtual ~Object() = 0;
};

inline Object::~Object(){}

#endif OBJ_H