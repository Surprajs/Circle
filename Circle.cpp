#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>       //for pow() and M_PI (which isn't working in my code::blocks anyway xd)
#include "Circle.h"
//setters
void Circle::setRadius(double radius)
{
this->radius = radius;
}
void Circle::setColor(std::string color)
{
this->color = color;
}
//getters
double Circle::getRadius()      const
{
    return radius;
}
std::string Circle::getColor()  const
{
    return color;
}
//constructor
Circle::Circle(double rad, std::string col)
    {
        radius = rad;
        color = col;
    }
double Circle::getArea()        const
{
    return pow(radius,2)*3.14159;
}
Circle Circle::compareArea(const Circle & temp_circle)
{
    if (this->getArea() > temp_circle.getArea())
    return *this;
    else return temp_circle;
}
void Circle::describe()         const
{
    std::cout<<"This "<<getColor()<<" circle has a radius equal to "<<getRadius()<<" and area equal to "<<getArea()<<".\n";
}
