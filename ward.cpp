#include <iostream>
using namespace std;

int main() {
    int age;
    double money;
    bool parent;
    string toPrintShow, toPrintMoney;

    cout << "Enter age: ";
    cin >> age;

    if (age < 13) {
        cout << "With Parent? (1 for yes, 0 for no): ";
        cin >> parent;
        toPrintShow = parent ? "PG & G show." : "G show.";
    } else if (age < 18) {
        cout << "With Parent? (1 for yes, 0 for no): ";
        cin >> parent;
        toPrintShow = parent ? "R, PG & G show." : "PG & G show.";
    } else {
        toPrintShow = "R, PG & G show.";
    }

    cout << "Enter money: ";
    cin >> money;

    toPrintMoney = (money < 7.5) ? "Not enough money." :
                   (money < 10.5) ? "Can go to matinee show." :
                   "Can go to evening & matinee show.";

    cout << toPrintShow << endl;
    cout << toPrintMoney << endl;

    return 0;
}
