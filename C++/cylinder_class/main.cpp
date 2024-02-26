#include "Cylinder.h"
#include <iostream>

using namespace std;

int main()
{
    Cylinder can1;
    can1.height = 4.5;
    can1.radius = 1.25;

    cout << "Height: " << can1.height << endl;
    cout << "Radius: " << can1.radius << endl;
    cout << "Volume: " << can1.volume() << endl;
}