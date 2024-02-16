#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // --- Inputting from a file ---
    string fileReader; // Normal variable

    ifstream pets("pets.txt");

    // Check for error
    if(pets.fail()) // can also do !pets or !pets.is_open()
    {
        // streams: cin, cout, cerr
        cerr << "Failed to open file";
        // return failure
        return -1;
    }

    // Separated by whitespace
    while(pets >> fileReader)
    {
        cout << fileReader << " ";
    }
    cout << endl;

    pets.close();

    // --- Outputting to a file ---
    ofstream petsOut("pets.txt");

    string newPet;
    cout << "Add a pet to the file: ";
    cin >> newPet;
    petsOut << newPet;

    // Make sure to close the file
    petsOut.close();

    return 0;
}
