
#include <iostream>

#include "point.h"

int main()
{
    Point p;
    std::cout << "point p: " << p.to_string() << std::endl;
    
    Point p1(1, 2);
    Point p2(34, -12);
    std::cout << "point p1: " << p1.to_string() << std::endl;
    std::cout << "point p2: " << p2.to_string() << std::endl;

    std::cout << "Addition: p1 + p2 = " << (p1 + p2).to_string() << std::endl;
    std::cout << "Subtraction: p1 - p2 = " << (p1 - p2).to_string() << std::endl;
    std::cout << "Multiplication: p1 * p2 = " << (p1 * p2).to_string() << std::endl;
    std::cout << "Unary operator -: -p1: " << (-p1).to_string() << std::endl;

    std::cout << (p1 == p2 ? "p1 equals to p2" : "p1 does not eqault to p2");

    return 0;
}