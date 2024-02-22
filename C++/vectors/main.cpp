#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numVals = 10;
    double initVal = 5.5;
    vector<double> myVect(numVals, initVal);
    
    // .at() is safer than [] access
    cout << myVect.at(3) << endl;


    return 0;
}
