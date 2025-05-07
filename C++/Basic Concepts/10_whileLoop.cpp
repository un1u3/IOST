#include <iostream>
using namespace std;

// A while loop continues to execute a block of code as long as the specified condition is true.
// Syntax:
// while (condition) {
//     // Code to be executed
// }

int main() {
    int count = 1;

    // Example: Print numbers from 1 to 5 using a while loop
    while (count <= 5) {
        cout << "Iteration: " << count << endl;
        count++;
    }

    return 0;
}
