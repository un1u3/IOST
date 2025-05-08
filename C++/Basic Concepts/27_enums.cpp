// An enum (short for enumeration) is a user-defined data type that consists of integral constants. 
// It assigns names to integral values to make a program easier to read and maintain.

#include <iostream>
using namespace std;

enum Days {
    Monday,   // 0
    Tuesday,  // 1
    Wednesday, // 2
    Thursday, // 3
    Friday,   // 4
    Saturday, // 5
    Sunday    // 6
};

int main() {
    Days today = Friday;

    cout << "Today is: " << today << endl;  // Outputs: 4

    return 0;
}
