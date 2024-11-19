#include <iostream>

using namespace std;

int main ()
{	
	int age;
	double money;
	bool parent;
	string toPrintShow, toPrintMoney]
	cout << "enter age: ";
	cin >> age;
	if(age<13) { 
		cout << "With Parent? ";
		cin >> parent;
				toPrintShow = "PG & G show.";
			else
				toPrintShow = "G show.";
	}
	else if (age<) {
		cout << with parents? ";
		cin >> parent;
		if (parent)
			toPrintShow = "R, PG & Show. ";
		else 
			toPrintShow = "PG & G Show. ";
	}
	else 
		toPrintShow = "R, PG & G Show. ";
	cout << "enter money: ";
	cin >> money;
	if(money<7.5)
		toPrintMoney = "not enough money.";
	else if (money<10.5)
		toPrintMoney = "Can go to matinee show. "; 
	else
		toPrintMoney = "can go to evening & matinee show.";
	cout << toPrintShow << endl;
	cout << toPrintMoney << endl;
	return 0;
}
		
	
	
	