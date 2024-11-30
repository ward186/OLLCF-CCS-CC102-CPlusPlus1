#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string withParent;
    double money;
    string eligibleRatings, ticketTime;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with a parent? (yes/no): ";
    cin >> withParent;
    cout << "Enter the amount of money you have: ";
    cin >> money;

    if (age < 13) {
        if (withParent == "yes") {
            eligibleRatings = "G, PG";
        } else {
            eligibleRatings = "G";
        }
    } else if (age < 16) {
        if (withParent == "yes") {
            eligibleRatings = "G, PG, R";
        } else {
            eligibleRatings = "G, PG";
        }
    } else {
        eligibleRatings = "G, PG, R";
    }

    if (money >= 10.50) {
        ticketTime = "Evening";
    } else if (money >= 7.50) {
        ticketTime = "Matinee";
    } else {
        ticketTime = "None";
    }

    cout << "Eligible movie ratings: " << eligibleRatings << endl;
    if (ticketTime != "None") {
        cout << "You can afford a " << ticketTime << " ticket." << endl;
    } else {
        cout << "You cannot afford a ticket." << endl;
    }

    return 0;
}
