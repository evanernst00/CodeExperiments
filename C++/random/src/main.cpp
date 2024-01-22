/* 
 * Evan Ernst - Jan 19 2024
 *
 */

#include <iostream>
#include "../includes/randomPy.hpp"
#include "../includes/uniform.hpp"
#include "../includes/randInt.hpp"
using namespace std;

int main() {
    cout << "Random numbers with cstdlib" << endl;

    // random - random double between 0 and 1
    cout << "Random float between 0 and 1: " 
        << randomPy() << endl;

    // uniform - random double between min and max
    double minD = 3.141592653;
    double maxD = minD * 2;
    cout << "Random float between " << minD << " and " << maxD << ": "
        << uniform(minD, maxD) << endl;

    // randint - random integer between min and max
    int minI = 69;
    int maxI = 420;
    cout << "Random integer between " << minI << " and " << maxI << ": " 
        << randInt(minI, maxI) << endl;

    return 0;
}