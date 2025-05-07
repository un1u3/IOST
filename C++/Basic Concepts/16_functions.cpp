#include <iostream>
using namespace std;

// A function is a block of code that performs a specific task.
// It helps in modular programming and code reusability.

// 1. Function Declaration
void greet();
int add(int, int);
int factorial(int);

// 2. Main Function
int main() {
    // Function Call
    greet();

    // Passing Arguments and Receiving Return Value
    int sum = add(5, 7);
    cout << "Sum: " << sum << endl;

    // Recursion Example
    int num = 4;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}

// 3. Function Definition
// Function without parameters and return value
void greet() {
    cout << "Hello, welcome to functions in C++!" << endl;
}

// Function with parameters and return value
int add(int a, int b) {
    return a + b;
}

// Recursive Function
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
