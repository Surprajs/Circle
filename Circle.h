#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle
{
private:
    double radius;
    std::string color;
public:
    //setters
    void setRadius(double radius);
    void setColor(std::string color);
    //getters
    double getRadius()          const;
    std::string getColor()      const;
    //contructor
    Circle(double rad = 3, std::string col = "yellow");
    double getArea()            const;
    Circle compareArea(const Circle & temp_circle);
    void describe()             const;

};
#endif
