#include "triangle.h"

triangle::triangle (double tA, double tH)
{
    a = tA;
    h = tH;
}
double triangle::calcSquare()
{
    return (0.5)*a*h;
}
