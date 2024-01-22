// randomPy.cpp
#include <cstdlib>
#include <ctime>
#include "../includes/randomPy.hpp"

// Returns a double between 0 inclusive and 1 exclusive
double randomPy()
{
    srand(time(0));

    return rand() / static_cast<double>(RAND_MAX);
}