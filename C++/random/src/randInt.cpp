// randInt.cpp
#include <cstdlib>
#include <ctime>
#include "../includes/randInt.hpp"

int randInt(int min, int max)
{
    srand(time(0));

    // min inclusive, max exclusive
    int rangeSize = max - min;

    /*
     * The modulo operator divides the left by the right, then returns the remainder.
     * 
     * left % right = a number less than the right
     * 
     * So as a principle, if you don't know what the left is, you can guarantee it will be less than the right.
     * So make the left random, then choose how large the range to limit it to.
     * Finally, add the minimum to put the final number in the correct range.
     */
    return rand() % rangeSize + min;
}