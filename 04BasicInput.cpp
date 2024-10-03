#include <iostream>
using namespace std;

int main() {

    string nickname, courseYear, school;

    cout << "Enter your nickname: ";
    cin >> nickname;

    cout << "Enter your course and year level: ";
    cin >> courseYear;

    cout << "Enter your school: ";
    cin >> school;

    cout << "\nWow Congrats " << nickname << "! " << courseYear << " is a nice course. And you are studying in " << school<< ", which is one of the Centers of Excellence in Tertiary Education.\n";

    return 0;
}