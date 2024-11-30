#include <iostream>
#include <string>

using namespace std;

int main() {
    string accountType, accountLevel;
    double accountBalance, interestRate = 0.0;

    cout << "Enter account type (Personal/Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard/Gold/Platinum): ";
    cin >> accountLevel;
    cout << "Enter your account balance: ";
    cin >> accountBalance;

    if (accountType == "Personal") {
        if (accountLevel == "Standard") {
            interestRate = 1.2;
        } else if (accountLevel == "Gold") {
            if (accountBalance >= 5000) {
                interestRate = 2.3;
            } else if (accountBalance >= 1000) {
                interestRate = 1.9;
            }
        }
    } else if (accountType == "Business") {
        if (accountLevel == "Standard") {
            if (accountBalance >= 1500) {
                interestRate = 1.7;
            }
        } else if (accountLevel == "Platinum") {
            if (accountBalance >= 10000) {
                interestRate = 2.5;
            }
        }
    }

    if (interestRate > 0.0) {
        cout << "Your interest rate is " << interestRate << "%." << endl;
    } else {
        cout << "You are not eligible for interest." << endl;
    }

    return 0;
}
