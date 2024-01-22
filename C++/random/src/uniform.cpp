// uniform.cpp
#include <cstdlib>
#include <ctime>
#include "../includes/randomPy.hpp"
#include "../includes/uniform.hpp"

// Returns a double between min inclusive and max exclusive
double uniform(double min, double max)
{
    srand(time(0));

    // min inclusive, max exclusive
    double rangeSize = max - min;

    return randomPy() * rangeSize + min;
}