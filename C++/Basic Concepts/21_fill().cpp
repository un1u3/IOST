#include <iostream>
#include <algorithm>  // For fill()
using namespace std;

int main() {

    // Without fill(): Manually filling the array
    string foods1[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    cout << "Array filled manually:\n";
    for (string food : foods1) {
        cout << food << "\n";
    }

    cout << "\nUsing fill() to fill the array with 'burger':\n";

    // Using fill() function
    string foods2[10];
    fill(foods2, foods2 + 10, "burger");

    for (string food : foods2) {
        cout << food << "\n";
    }

    return 0;
}