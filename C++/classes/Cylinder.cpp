#include "Cylinder.h"
#include <cmath>

using namespace std;

const double PI = acos(-1);

Cylinder::Cylinder()
{
    height = 1;
    radius = 1;
}

Cylinder::Cylinder(const double h, const double r)
{
    height = h;
    radius = r;
}

double Cylinder::volume()
{
    return height * (PI*radius*radius);
}