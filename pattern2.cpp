#include <iostream>
using namespace std;

int main() {
	int rows = 7;
	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < i; j++) {
			cout <<"  ";
		}
		for (int k = 0; k < rows - i; k++) {
			if ((i + k) % 2 == 0)
				cout <<"@ ";
			else if ((i + k) % 3 == 0)
				cout <<"$ ";
			else 
				cout << "# ";
		}
		cout << endl;
    }		
	return 0;
}