// Pointers in C++ - Comprehensive Guide

#include <iostream>
using namespace std;

// ----------------------------
// Definition of a Pointer
// A pointer is a variable that stores the memory address of another variable.
// Syntax: data_type *pointer_name;
int main() {
    int x = 10;
    int *ptr = &x;  // 'ptr' now holds the address of 'x'

    cout << "Value of x: " << x << endl;
    cout << "Address of x (&x): " << &x << endl;
    cout << "Pointer 'ptr' stores address: " << ptr << endl;
    cout << "Value at address 'ptr' (*ptr): " << *ptr << endl;

    // ----------------------------
    // Types of Pointers

    // 1. Null Pointer
    int *nullPtr = nullptr; // Points to nothing
    cout << "Null Pointer: " << nullPtr << endl;

    // 2. Wild Pointer (Uninitialized pointer, dangerous)
    int *wildPtr;
    cout << "Wild Pointer (Uninitialized): " << wildPtr << endl;

    // 3. Dangling Pointer
    int *danglingPtr = new int(20);
    delete danglingPtr; // 'danglingPtr' now points to deallocated memory
    cout << "Dangling Pointer: " << danglingPtr << endl;

    // 4. Void Pointer
    void *voidPtr;
    voidPtr = &x; // Can point to any data type
    cout << "Void Pointer Address: " << voidPtr << endl;

    // 5. Constant Pointer
    int y = 30;
    int *const constPtr = &y; // Address can't be changed
    cout << "Constant Pointer Address: " << constPtr << endl;

    // 6. Pointer to Constant
    const int z = 40;
    const int *ptrToConst = &z; // Value can't be changed
    cout << "Pointer to Constant Value: " << *ptrToConst << endl;

    // ----------------------------
    // Passing by Value
    int a = 50;
    cout << "Before passByValue: " << a << endl;
    passByValue(a);
    cout << "After passByValue: " << a << endl;

    // Passing by Reference
    cout << "Before passByReference: " << a << endl;
    passByReference(&a);
    cout << "After passByReference: " << a << endl;

    return 0;
}

// Function to demonstrate Pass by Value
void passByValue(int n) {
    n = 100;
}

// Function to demonstrate Pass by Reference using Pointers
void passByReference(int *n) {
    *n = 100;
}
