#include <iostream>
using namespace std;

int main() {
    char symbol1, symbol2, symbol3;

    cout << "Enter 1st symbol to use (*, ^, #, $, @): ";
    cin >> symbol1;
    cout << "Enter 2nd symbol to use (*, ^, $, @): ";
    cin >> symbol2;
    cout << "Enter 3rd symbol to use (*, $, @): ";
    cin >> symbol3;

    cout << "\nYou picked: " << symbol1 << " " << symbol2 << " " << symbol3 << endl;

    return 0;
}
