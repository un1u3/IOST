#include <iostream>
using namespace std;

int main() {
    // **Implicit Type Conversion (Automatic Conversion)**
    // Occurs when the compiler automatically converts one data type to another, usually from smaller to larger types.

    int a = 10;       // Integer type
    float b = a;      // Implicit conversion: int to float
    cout << "Implicit Type Conversion (int to float):" << endl;
    cout << "a = " << a << " (int)" << endl;
    cout << "b = " << b << " (float)" << endl;

    // Implicit conversion also happens in arithmetic operations
    double result = a + b;  // int + float = double (int 'a' is implicitly converted to float)
    cout << "Result of a + b (int + float = double): " << result << endl;

    // **Explicit Type Conversion (Type Casting)**
    // Explicit type conversion is when the programmer manually converts a variable from one type to another using type casting.

    double c = 5.99;  // A double value
    int d = (int)c;   // C-style casting (double to int)
    cout << "\nExplicit Type Conversion (C-style cast, double to int):" << endl;
    cout << "c = " << c << " (double)" << endl;
    cout << "d = " << d << " (int) (after truncation)" << endl;  // truncates the decimal part

    // **C++ Casting (static_cast)**
    // static_cast is a safer way to cast in C++ compared to C-style casting.

    double e = 7.45;
    int f = static_cast<int>(e);  // C++ casting (double to int)
    cout << "\nExplicit Type Conversion (C++ static_cast, double to int):" << endl;
    cout << "e = " << e << " (double)" << endl;
    cout << "f = " << f << " (int) (after truncation)" << endl;

    // **Float to Int Conversion**
    // When converting a float to an int, the decimal part is truncated.

    float g = 3.99f;
    int h = static_cast<int>(g);  // float to int (explicit conversion)
    cout << "\nFloat to Int Conversion (explicit casting):" << endl;
    cout << "g = " << g << " (float)" << endl;
    cout << "h = " << h << " (int) (after truncation)" << endl;

    // **Char to Int Conversion**
    // When a char is converted to an int, its ASCII value is used.

    char i = 'A';
    int ascii_value = static_cast<int>(i);  // char to int (ASCII value)
    cout << "\nChar to Int Conversion (explicit casting):" << endl;
    cout << "i = " << i << " (char)" << endl;
    cout << "ASCII value of 'A': " << ascii_value << " (int)" << endl;

    // **Implicit and Explicit Conversion in Arithmetic Operations**
    // Implicit conversion happens when operands of different types are used together in an expression.

    cout << "\nImplicit Conversion in Arithmetic Operations:" << endl;
    int x = 5;
    double y = 3.14;
    double result2 = x + y;  // Implicit conversion of int to double before addition
    cout << "x = " << x << " (int), y = " << y << " (double)" << endl;
    cout << "Result of x + y (int + double = double): " << result2 << endl;

    // **Implicit Conversion Example with Larger Data Types**
    // Here, a smaller data type (char) is implicitly converted to int.

    char j = 'B';  // 'B' has an ASCII value of 66
    int k = j;     // Implicit conversion from char to int (ASCII value of 'B')
    cout << "\nImplicit Conversion (char to int):" << endl;
    cout << "j = " << j << " (char), k = " << k << " (int, ASCII value of 'B')" << endl;

    // **Type Conversion with Expressions**
    // Type conversion also occurs in expressions with mixed data types.

    cout << "\nType Conversion with Expressions:" << endl;
    float m = 8.7f;
    int n = 4;
    double result3 = m * n;  // Implicit conversion of int to float before multiplication
    cout << "m = " << m << " (float), n = " << n << " (int)" << endl;
    cout << "Result of m * n (float * int = double): " << result3 << endl;

    // **Key Points:**
    // 1. Implicit Type Conversion happens automatically by the compiler.
    // 2. Explicit Type Conversion (Type Casting) is done manually using (type)value or static_cast<type>(value).
    // 3. Conversion between incompatible types may result in data loss (e.g., truncating decimal part in float-to-int conversion).

    return 0;
}
