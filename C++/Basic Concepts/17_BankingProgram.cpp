#include<iostream>

using namespace std;

// Function Prototypes
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;

    do {
        cout << "**************************" << endl;
        cout << "Enter your choice:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "**************************" << endl;
        cin >> choice;

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                cout << "Thank you for using the banking system!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}

// Function Definitions
void showBalance(double balance) {
    cout << "Your current balance is: $" << balance << endl;
}

double deposit() {
    double amount = 0;
    cout << "Enter amount to deposit: $";
    cin >> amount;
    if (amount <= 0) {
        cout << "Invalid amount. Please enter a positive number." << endl;
        return 0;
    }
    cout << "$" << amount << " has been deposited." << endl;
    return amount;
}

double withdraw(double balance) {
    double amount = 0;
    cout << "Enter amount to withdraw: $";
    cin >> amount;
    if (amount > balance) {
        cout << "Insufficient balance." << endl;
        return balance;
    } else if (amount <= 0) {
        cout << "Invalid amount." << endl;
        return balance;
    }
    cout << "$" << amount << " has been withdrawn." << endl;
    return balance - amount;
}