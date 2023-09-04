#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class circle:public Shape
{
private:
    double r;
public:
    circle (double aR);
    double calcSquare();
};

#endif
