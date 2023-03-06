#include "ArraysPractice.h"
#include <iostream> 
#include <cstring>

using namespace std;

int main2() {

    cout << "Enter up to 50 characters:\n";
    char name2[50];
    cin.getline(name2, 50);
    cout << name2 << "\n";

    // ------------------

    double grades[5][6] = { 0 };

    for (int row = 0; row < 5; row++)
        for (int col = 0; col < 3; col++)
            cin >> grades[row][col];

    for (int col = 0; col < 6; col++) {
        cout << "Col " << col << ": ";
        for (int row = 0; row < 5; row++) {
            cout << grades[row][col] << " ";
        }
        cout << "\n";
    }
        
    return 0;
}
