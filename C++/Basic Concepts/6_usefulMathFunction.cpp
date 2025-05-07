#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    double x = -5.7;
    double y = 16.0;
    double angle = 45.0;
    double a, b;

    cout << "Useful Math Functions in C++" << endl;
    cout << "--------------------------------" << endl;

    // Basic Math Functions
    cout << "Absolute value of " << x << ": " << abs(x) << endl;
    cout << "Square root of " << y << ": " << sqrt(y) << endl;
    cout << "Power (3^4): " << pow(3, 4) << endl;
    cout << "Ceiling of " << x << ": " << ceil(x) << endl;
    cout << "Floor of " << x << ": " << floor(x) << endl;

    cout << "\n";

    // Trigonometric Functions
    double radians = angle * (M_PI / 180.0); // Convert to radians
    cout << "Sine of " << angle << "°: " << sin(radians) << endl;
    cout << "Cosine of " << angle << "°: " << cos(radians) << endl;
    cout << "Tangent of " << angle << "°: " << tan(radians) << endl;

    cout << "\n";

    // Exponential and Logarithmic Functions
    cout << "Exponential of " << y << ": " << exp(y) << endl;
    cout << "Natural log of " << y << ": " << log(y) << endl;
    cout << "Log base 10 of " << y << ": " << log10(y) << endl;

    cout << "\n";

    // Hypotenuse Calculation
    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    double hypotenuse = hypot(a, b);
    cout << "Hypotenuse: " << hypotenuse << endl;

    cout << "\n";

    // Rounding Functions
    cout << "Rounded " << x << ": " << round(x) << endl;
    cout << "Ceil " << x << ": " << ceil(x) << endl;
    cout << "Floor " << x << ": " << floor(x) << endl;

    return 0;
}
