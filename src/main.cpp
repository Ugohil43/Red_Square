#include <iostream>
#include <RedSquare.h>
#include <circle.h>
#include <triangle.h>
#include <rectangle.h>

//cmake -G "MinGW Makefiles" ../
 
int main()
{
    RedSquare bigSquare;
    bigSquare.addShape(new circle(2));
    bigSquare.addShape(new triangle(2,1));
    bigSquare.addShape(new rectangle(1,1));
    std::cout<< "Summary square: "  << bigSquare.calcSquare()<<std::endl;
    return 0;

}