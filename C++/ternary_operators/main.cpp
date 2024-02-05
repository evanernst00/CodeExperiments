#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
    int input = 1;
    int x(0), y(0), max(0);
    while(input == 1)
    {
        srand(time(0));
        x = rand();
        srand(time(0));
        y = rand();

        cout << "x == " << x << 
        endl << "y == " << y << endl;

        max = x > y ? x : y;
        cout << "Max: " << max << endl;

    }

    return 0;
}
