#include <iostream>
using namespace std;

// Jump statements allow the program to alter the flow of control.
// Common jump statements:
// 1. break - Exits a loop or switch statement.
// 2. continue - Skips the current iteration and continues to the next.
// 3. return - Exits a function and optionally returns a value.

int main() {
    cout << "Using break and continue:\n";

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip 5
        }
        if (i == 8) {
            break; // Exit loop when i is 8
        }
        cout << i << " ";
    }
    cout << "\nLoop ended.\n";

    cout << "\nUsing return:\n";
    return 0;

    // This line will never be executed
    cout << "This will not print." << endl;
}
