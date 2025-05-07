#include <iostream>
using namespace std;

// Multi-dimensional arrays are arrays of arrays. Common types include 2D and 3D arrays.

int main() {
    // 1. Declaration and Initialization of a 2D Array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing and displaying elements of the 2D array
    cout << "2D Array Elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // 2. Declaration and Initialization of a 3D Array
    int cube[2][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}}
    };

    cout << "\n3D Array Elements:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cout << cube[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
