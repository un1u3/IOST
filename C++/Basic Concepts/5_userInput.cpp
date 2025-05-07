#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int age;
    double height;
    string name;

    // Integer input
    cout << "Enter your age: ";
    cin >> age;

    
    // Double input
    cout << "Enter your height in meters: ";
    cin >> height;

    

    // String input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nHello " << name << "! You are " << age << " years old and " 
         << height << " meters tall." << endl;

    return 0;
}
