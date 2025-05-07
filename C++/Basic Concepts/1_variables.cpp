// Variables - Variables are containers that store data values.
// Each variable in C++ must be declared with a specific type, which determines the size and layout of the variable's memory.

#include <iostream>
#include <string> // Required for using string type
using namespace std;

int main() {
    // Declaration and Initialization:

    int a = 1;              // Integer variable: stores whole numbers like -1, 0, 5, 100
    char b = 'r';           // Character variable: stores a single character like 'a', 'Z', '1'
    float c = 3.1415f;      // Float variable: stores decimal numbers with single precision (6-7 digits)
    double d = 3.141592;    // Double variable: stores decimal numbers with double precision (up to 15 digits)
    bool e = true;          // Boolean variable: stores true (1) or false (0)
    string name = "Hello";  // String variable: stores a sequence of characters (text)

    // Output a boolean value
    cout << "Boolean e = " << e << endl; // Will print 1 because true is represented as 1

    // Variable Declaration without Initialization:

    int x;           // Declaration only (no value assigned yet)
    x = 5;           // Assignment after declaration
    // Note: Using a variable without initializing may lead to undefined behavior.

    char y = 'h';    // Declaration and assignment in one line

    // Variable naming rules:
    // - Can contain letters, digits, and underscores
    // - Must begin with a letter or underscore (_)
    // - Cannot be a C++ keyword (like int, float, etc.)
    // - Case-sensitive (e.g., "Var" and "var" are different)

    // Types of Variables in C++:
    // 1. Local Variables – declared inside a function or block
    // 2. Global Variables – declared outside all functions (not shown here)
    // 3. Static Variables – preserve their value between function calls
    // 4. Constants – variables whose value cannot be changed after initialization (use 'const')

    // Example of constant:
    const float pi = 3.14;
    cout << "Constant pi = " << pi << endl;

    return 0;
}
