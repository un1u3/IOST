#include <iostream>
using namespace std;
// A do-while loop executes a block of code at least once before checking the condition.
// Syntax:
// do {
//     // Code to be executed
// } while (condition);

int main() {
    int count = 1;

    // Example: Print numbers from 1 to 5 using a do-while loop
    do {
        cout << "Iteration: " << count << endl;
        count++;
    } while (count <= 5);

    return 0;
}
