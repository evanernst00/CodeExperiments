#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Inputting from a file
    string fileData;
    ifstream myInput("pets.txt");
    myInput >> fileData;

    cout << fileData;

    return 0;
}