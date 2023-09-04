#include "circle.h"

circle::circle (double aR)
{
    r = aR;
}
double circle::calcSquare()
{
    return 3.1416*r*r;
}
