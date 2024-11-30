#include <iostream>
using namespace std;

int main() {
    int age;
    char withParents;
    double money;
    bool isWithParents;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Are you with your parents? (y/n): ";
    cin >> withParents;
    isWithParents = (withParents == 'y' || withParents == 'Y');
    cout << "Enter the amount of money you have: ";
    cin >> money;

    if (age < 13) {
        if (isWithParents) {
            cout << "You can watch G or PG movies." << endl;
        } else {
            cout << "You can only watch G movies." << endl;
        }
    } else if (age >= 13 && age < 16) {
        if (isWithParents) {
            cout << "You can watch G, PG, or R movies." << endl;
        } else {
            cout << "You can watch G or PG movies." << endl;
        }
    } else {
        cout << "You can watch G, PG, or R movies." << endl;
    }

    if (money >= 10.50) {
        cout << "You can afford an evening ticket." << endl;
    } else if (money >= 7.50) {
        cout << "You can afford a matinee ticket." << endl;
    } else {
        cout << "You don't have enough money for a movie ticket." << endl;
    }

    return 0;
}
