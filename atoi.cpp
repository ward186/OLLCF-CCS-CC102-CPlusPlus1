// a:
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if ((i + j) % 2 == 0) {
                cout << "# ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }
	return 0;
}
// b:
#include <iostream>
using namespace std;

int main() {
    for (int i = 7; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "# ";
        }
        cout << endl;
    }
   return 0;
}
// c:
#include <iostream>
using namespace std;

int main() {
    for (int i = 7; i >= 1; i--) {
        for (int j = 7; j >= i; j--) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}

// d:
#include <iostream>
using namespace std;

void patternD(int rows) {
    for (int i = 1; i <= rows; i++) { // Loop for each row
        for (int j = i; j >= 1; j--) { // Print numbers in descending order
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 8;
    cout << "Pattern (d):" << endl;
    patternD(rows); // Call the function
    return 0;
}

// e:
#include <iostream>
using namespace std;

void patternE(int rows) {
    for (int i = 1; i <= rows; i++) { // Loop for each row
        for (int j = 1; j <= i; j++) { // Print numbers in ascending order
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 8;
    cout << "Pattern (e):" << endl;
    patternE(rows); // Call the function
    return 0;
}

#include <iostream>
using namespace std;

void patternHash(int rows) {
    for (int i = rows; i >= 1; i--) { // Rows from `rows` to 1
        for (int j = 1; j <= i; j++) { // Print `#` i times
            cout << "# ";
        }
        cout << endl; // Move to the next row
    }
}

int main() {
    int rows = 8;
    cout << "Hash Pattern:" << endl;
    patternHash(rows); // Call the function
    return 0;
}

 // f:
 #include <iostream>
using namespace std;

int main() {
    cout << "f:" << endl;
    for (int i = 6; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "^";
        }
        cout << endl;
    }
	    return 0;
}
// g:
#include <iostream>
using namespace std;

int main() {
    cout << "g:" << endl;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "^";
        }
        cout << endl;
    }
    return 0;
}

// i:
#include <iostream>
using namespace std;

int main() {
    cout << "i:" << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j < i; j++) {
            cout << "^";
        }
        cout << "*" << endl;
    }

    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << "#";
        }
        for (int k = 1; k <= 5; k++) {
            cout << "^";
        }
        cout << "*" << endl;
    }

    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j < i; j++) {
            cout << "^";
        }
        cout << "*" << endl;
    }

    return 0;
}



