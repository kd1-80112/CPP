#include "cylinder.h"
#include <iostream>
using namespace std;
cylinder::cylinder()
{
    this->radius = 0;
    this->height = 0;
}
cylinder::cylinder(double radius, double height)
{
    this->radius = radius;
    this->height = height;
}

double cylinder::getRadius()
{
    return this->radius;
}
double cylinder::getHeight()
{
    return this->height;
}
void cylinder::setRadius(int radius)
{
    this->radius = radius;
}
void cylinder::setHeight(int height)
{
    this->height = height;
}
double cylinder::getvolume()
{
    double volume = 3.14 * this->radius * this->height;
    return volume;
}
void cylinder::printvolume()
{

    cout << "voulme=" << getvolume() << endl;
}