#include <iostream>
#include <vector>
using namespace std;


// The foreach loop allows for iterating over a collection without using indices.

int main() {
    // 1. Using foreach with Arrays
    int numbers[] = {10, 20, 30, 40, 50};
    cout << "Array elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // 2. Using foreach with Vectors
    vector<int> nums = {100, 200, 300};
    cout << "Vector elements: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // 3. Using const to prevent modification
    cout << "Const iteration: ";
    for (const int num : nums) {
        cout << num << " ";
        // num = 10; // Error: Cannot modify when using const
    }
    cout << endl;

    // 4. Using auto keyword
    cout << "Using auto: ";
    for (auto num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // 5. Modifying elements
    cout << "Modifying elements: ";
    for (int &num : nums) {
        num += 10;  // Adds 10 to each element
    }
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
