#include "rectangle.h"

rectangle::rectangle (double rA,double rB)
{
    a = rA;
    b = rB;
}
double rectangle::calcSquare()
{
    return a*b;
}
