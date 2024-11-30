#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string accountType, level;
    double balance, interestRate = 0;

    cout << "Enter account type (Personal or Business): ";
    cin >> accountType;
    cout << "Enter account level (Standard, Gold, or Platinum): ";
    cin >> level;
    cout << "Enter your account balance: ";
    cin >> balance;

    transform(accountType.begin(), accountType.end(), accountType.begin(), ::tolower);
    transform(level.begin(), level.end(), level.begin(), ::tolower);

    if (accountType == "personal") {
        if (level == "standard") {
            interestRate = 1.2;
        } else if (level == "gold") {
            if (balance >= 5000) {
                interestRate = 2.3;
            } else if (balance >= 1000) {
                interestRate = 1.9;
            }
        }
    } else if (accountType == "business") {
        if (level == "standard" && balance >= 1500) {
            interestRate = 1.7;
        } else if (level == "platinum" && balance >= 10000) {
            interestRate = 2.5;
        }
    }

    if (interestRate > 0) {
        cout << "The interest rate for your account is: " << interestRate << "%" << endl;
    } else {
        cout << "No applicable interest rate found based on the provided details." << endl;
    }

    return 0;
}
