#include "Cylinder.h"
#include <cmath>

using namespace std;

const double PI = acos(-1);

Cylinder::Cylinder()
{
    _height = 1;
    _radius = 1;
}

Cylinder::Cylinder(const double h, const double r)
{
    // Protect against bad initialized values
    if(h > 0) _height = h;
    else _height = 1;

    if(r > 0) _radius = r;
    else _radius = 1;
}

double Cylinder::volume()
{
    return _height * (PI* _radius * _radius);
}

double Cylinder::getHeight()
{
    return _height;
}

double Cylinder::getRadius()
{
    return _radius;
}

double Cylinder::setHeight(double h)
{
    if(h > 0) _height = h;
    return _height;
}

double Cylinder::setRadius(double r)
{
    if(r > 0) _radius = r;
    return _radius;
}
