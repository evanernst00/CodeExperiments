#include "Cylinder.h"

const double PI = 3.14159;

double Cylinder::volume()
{
    return height * (PI*radius*radius);
}