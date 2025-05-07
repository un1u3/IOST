#include <iostream>
using namespace std;


// An array is a collection of elements of the same data type stored in contiguous memory locations.

int main() {
    // 1. Declaration and Initialization
    int numbers[5] = {10, 20, 30, 40, 50};

    // 2. Accessing and Modifying Elements
    cout << "First element: " << numbers[0] << endl;
    numbers[0] = 15;
    cout << "Updated first element: " << numbers[0] << endl;

    // 3. Traversing the Array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 4. Multi-Dimensional Array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Matrix elements:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // 5. Array as Function Argument
    void printArray(int arr[], int size);
    cout << "\nPassing array to function:\n";
    printArray(numbers, 5);

    return 0;
}

// Function to print array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
