#include <iostream>

// namespace - provides a solution for preventing name conflicts
//            in a large projects . Each entity needs a unique name,
//            A namespace allows for identically named entities as long as the namespaces are differnt
using namespace std; // The 'std' namespace is used for standard C++ objects like cout, endl, etc.

int main() {
    // Using a variable from the 'std' namespace
    cout << "Hello from the std namespace!" << endl;

    // Declaring and using our own custom namespace
    namespace MySpace {
        int x = 10;  // Variable inside MySpace
        double y = 3.14; // Another variable inside MySpace
    }

    // Accessing variables from our custom namespace MySpace
    cout << "Value of x in MySpace: " << MySpace::x << endl;
    cout << "Value of y in MySpace: " << MySpace::y << endl;

    // Nested namespaces
    namespace Outer {
        namespace Inner {
            int value = 100; // Variable inside the nested namespace
        }
    }

    // Accessing a variable from the nested namespace Outer::Inner
    cout << "Nested namespace value: " << Outer::Inner::value << endl;

    // Using 'using namespace' to avoid typing the full namespace name
    using namespace MySpace; // Now we can directly access MySpace's variables
    cout << "Value of x directly: " << x << endl; // Direct access to 'x' in MySpace
    cout << "Value of y directly: " << y << endl; // Direct access to 'y' in MySpace

    // Anonymous namespace (only visible within this file)
    namespace {
        int secret = 42; // This variable is only accessible in this file
    }

    // Accessing the anonymous namespace variable
    cout << "Secret value from anonymous namespace: " << secret << endl;

    return 0;
}
