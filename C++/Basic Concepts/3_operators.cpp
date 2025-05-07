#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators: Used to perform basic arithmetic operations
    int a = 10, b = 5;

    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << a + b << endl;  // Addition
    cout << "a - b = " << a - b << endl;  // Subtraction
    cout << "a * b = " << a * b << endl;  // Multiplication
    cout << "a / b = " << a / b << endl;  // Division
    cout << "a % b = " << a % b << endl;  // Modulus (remainder of division)

    // Relational Operators: Used to compare values
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Equality check (1 if true, 0 if false)
    cout << "a != b: " << (a != b) << endl; // Not equal
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    // Logical Operators: Used to perform logical operations (AND, OR, NOT)
    bool x = true, y = false;

    cout << "\nLogical Operators:" << endl;
    cout << "(x && y): " << (x && y) << endl; // AND (true only if both are true)
    cout << "(x || y): " << (x || y) << endl; // OR (true if at least one is true)
    cout << "(!x): " << (!x) << endl;         // NOT (negates the value)

    // Assignment Operators: Used to assign values to variables
    int z = 20;

    cout << "\nAssignment Operators:" << endl;
    z += 5;  // z = z + 5
    cout << "z += 5: " << z << endl;
    z -= 3;  // z = z - 3
    cout << "z -= 3: " << z << endl;
    z *= 2;  // z = z * 2
    cout << "z *= 2: " << z << endl;
    z /= 4;  // z = z / 4
    cout << "z /= 4: " << z << endl;
    z %= 3;  // z = z % 3
    cout << "z %= 3: " << z << endl;

    // Bitwise Operators: Used to perform bit-level operations
    int m = 5, n = 3;

    cout << "\nBitwise Operators:" << endl;
    cout << "m & n: " << (m & n) << endl; // Bitwise AND
    cout << "m | n: " << (m | n) << endl; // Bitwise OR
    cout << "m ^ n: " << (m ^ n) << endl; // Bitwise XOR
    cout << "~m: " << (~m) << endl;       // Bitwise NOT
    cout << "m << 1: " << (m << 1) << endl; // Left shift (multiply by 2)
    cout << "m >> 1: " << (m >> 1) << endl; // Right shift (divide by 2)

    // Increment/Decrement Operators: Used to increment or decrement a value by 1
    int p = 5;

    cout << "\nIncrement/Decrement Operators:" << endl;
    cout << "p++: " << p++ << endl; // Post-increment (value of p is used first, then incremented)
    cout << "++p: " << ++p << endl; // Pre-increment (value of p is incremented first, then used)
    cout << "p--: " << p-- << endl; // Post-decrement (value of p is used first, then decremented)
    cout << "--p: " << --p << endl; // Pre-decrement (value of p is decremented first, then used)

    // Conditional (Ternary) Operator: A shorthand for if-else statement
    int age = 18;

    cout << "\nConditional Operator (Ternary):" << endl;
    string result = (age >= 18) ? "Adult" : "Minor"; // If age is 18 or more, it's "Adult", else "Minor"
    cout << "Age check result: " << result << endl;

    // Comma Operator: Used to separate multiple expressions
    int q = 1, r = 2;

    cout << "\nComma Operator:" << endl;
    int sum = (q++, r++, q + r); // q is incremented first, then r, and finally the sum is calculated
    cout << "Sum using comma operator: " << sum << endl;

    // Sizeof Operator: Used to determine the size of a data type or variable
    cout << "\nSizeof Operator:" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    return 0;
}
