#ifndef REDSQUARE_H
#define REDSQUARE_H

#include <vector>
#include "Shape.h"

class RedSquare
{
private:
    std::vector<Shape*> _data;

public:
    void addShape(Shape* _figure);
    double calcSquare();

};

#endif