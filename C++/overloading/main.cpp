#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
double add(double a, int b)
{
    return a*b;
}

int main()
{
    cout << "1 + 2 = " << add(1, 2) << endl;
    cout << ".69 + 10 = " << add(.69, 10) << endl;

    return 0;
}
