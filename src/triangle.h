#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class triangle:public Shape
{
private:
    double a;
    double h;
public:
   triangle (double tA, double tH);
   double calcSquare();
};

#endif
