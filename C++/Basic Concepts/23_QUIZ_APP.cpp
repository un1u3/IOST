#include<iostream>
using namespace std;

int main() {
    // Array of questions
    string questions[] = {
        "1. What year was C++ created?",
        "2. Who invented C++?",
        "3. What is the predecessor of C++?"
    };

    // Array of options
    string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Mark Zuckerberg", "B. Guido van Rossum", "C. Bjarne Stroustrup", "D. None"},
        {"A. A", "B. B", "C. C", "D. C++"}
    };

    // Answer key (correct answers)
    char answerKey[] = {'C', 'C', 'C'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    // Loop through the questions
    for (int i = 0; i < size; i++) {
        cout << questions[i] << endl;

        // Display the options
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        // Get the user's answer
        cout << "Your answer: ";
        cin >> guess;

        // Check if the answer is correct
        if (toupper(guess) == answerKey[i]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect. The correct answer is " << answerKey[i] << "." << endl;
        }

        cout << endl;
    }

    // Display the final score
    cout << "Your final score is: " << score << "/" << size << endl;

    return 0;
}
