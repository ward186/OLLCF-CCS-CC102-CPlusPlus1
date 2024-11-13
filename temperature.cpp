#include <iostream>
using namespace std;

int main() {
    int temperature;

    cout << "Enter the current temperature in degrees: ";
    cin >> temperature;

    if (temperature) {
        cout << "It's cold! Bring a heavy jacket." << endl;
    } else if (temperature >= 32 && temperature <= 50) {
        cout << "It's chilly. Bring a light jacket." << endl;
    } else {
        cout << "It's warm. No jacket needed." << endl;
    }`

    return 0;
}
