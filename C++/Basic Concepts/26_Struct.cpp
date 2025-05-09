// A struct in C++ is a user-defined data type that groups together variables 
// of different data types under a single name

#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    // Declare a variable of type Person
    Person person1;

    // Assign values
    person1.name = "Alice";
    person1.age = 20;
    person1.height = 5.6;

    // Access and print values
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    return 0;
}
