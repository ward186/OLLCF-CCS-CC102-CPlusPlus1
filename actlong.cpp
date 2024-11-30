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

    cout << "You picked: " << symbol1 << " " << symbol2 << " " << symbol3 << endl;

    int x = 2;
    while (x <= 10) {
        int y = 2;
        while (y <= x) {
            cout << symbol2;
            y++;
        }
        cout << symbol3 << endl;
        x++;
    }

    int z = 2;
    while (z <= 20) {
        cout << symbol1;
        z++;
    }
    z = 2;
    while (z <= 10) {
        cout << symbol2;
        z++;
    }
    cout << symbol3 << endl;

    x = 10;
    while (x >= 2) {
        int y = 2;
        while (y <= x) {
            cout << symbol2;
            y++;
        }
        cout << symbol3 << endl;
        x--;
    }

    return 0;
}
