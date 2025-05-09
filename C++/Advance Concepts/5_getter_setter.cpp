#include<iostream>
using namespace std;

// Getters and setters are member functions that allow controlled access 
// to private data members of a class.
// - Getter: A function that retrieves the value of a private member.
// - Setter: A function that modifies the value of a private member.

class Stove {
    
    private:
        // Private data member
        int temperature = 0;

    public:
        // Getter method: A method that allows access to the private `temperature` variable.
        int getTemperature(int temp) {
            // Assign the new value to the private member using `this` pointer
            this->temperature = temp; 
            // Return the new value of `temperature`
            return temperature;
        }

        
};

int main() {

    // Create an object of the `Stove` class
    Stove stove;

    // Access the private `temperature` member using the getter method.
    cout << "The temperature is " << stove.getTemperature(51220) << endl;

    return 0;
}
