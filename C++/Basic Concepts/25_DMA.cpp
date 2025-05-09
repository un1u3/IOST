// Dynamic Memory Allocation (DMA) in C++ allows the allocation of memory during runtime. 

// DMA - Dynamic Memory Allocation 
// new - allocates memory 
// delete - deallocates memory 
// new[] - Allocates an array 
// delete[] - Deallocates an array 


#include <iostream>
using namespace std;

int main() {
    // 1. Allocates memory using new 
    int* ptr = new int;
    *ptr = 10;
    cout << "Value: " << *ptr << endl;

    // Deallocate memory 
    delete ptr;

    // 2. Allocating memory for an array of 5 integers using new[]
    int* arr = new int[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}
