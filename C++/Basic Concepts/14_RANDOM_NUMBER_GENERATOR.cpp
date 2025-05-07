#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()


// The rand() function generates a random number.
// The srand() function seeds the random number generator.
// Using time(0) as the seed ensures different results each run.

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 5
    int randNum = rand() % 5 + 1;

    // Explanation:
    // - rand() generates a large random number
    // - rand() % 5 generates a number between 0 and 4
    // - Adding 1 shifts the range to 1 - 5
    std::cout << "Random Number (1-5): " << randNum << std::endl;

    return 0;
}