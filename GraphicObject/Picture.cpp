#include "Picture.h"
#include <algorithm>

Picture::Picture() {
}


Picture::~Picture() {
}

void Picture::Add(GraphicObject* Element){
    mElements.push_back(Element);
}

void Picture::draw(){
    std::vector<GraphicObject *>::iterator begin = mElements.begin();
    
    while(begin != mElements.end()){
        (*begin)->draw();
        begin++;
    }
}

TBox Picture::getBoundingBox() const {
    std::vector<TBox> boundingBoxes;
    std::vector<GraphicObject *>::const_iterator begin = mElements.begin();
    while(begin != mElements.end()){
        boundingBoxes.push_back((*begin)->getBoundingBox());
        begin++;
    }

    return *std::max_element(boundingBoxes.begin(), boundingBoxes.end());
}

size_t Picture::getNumOfElements() const{
    return mElements.size();
}

void Picture::moveToHelper(TCoord const &position) {
    std::vector<GraphicObject *>::iterator begin = mElements.begin();
    while (begin != mElements.end()) {
        (*begin)->moveTo(TCoord( ( (*begin)->getPosition().first - mPosition.first + position.first ),
            ((*begin)->getPosition().second - mPosition.second + position.second) ));
        begin++;
    }
    mPosition.first  = position.first;
    mPosition.second = position.second;
}