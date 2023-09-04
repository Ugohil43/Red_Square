#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class rectangle:public Shape
{
private:
    double a;
    double b;
public:
   rectangle (double rA, double rB);
   double calcSquare();
};

#endif
