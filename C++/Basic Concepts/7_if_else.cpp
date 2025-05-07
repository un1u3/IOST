#include <iostream>
using namespace std;

// The if-else statement allows for conditional execution of code blocks.
// Syntax:
// if (condition) {
//     // Code to execute if condition is true
// } else {
//     // Code to execute if condition is false
// }

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is even or odd using if-else
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0;
}