#include <iostream>
using namespace std;

int main () {
	int year;
	cout << "enter year : " ; cin >> year;
	// 400d huvaagdah, 100d huvaagddag ni bish
	// 4-t huvaagdah
	
	if (year % 400 == 0 ||(year % 4 == 0 && year % 100 != 0)) {
		cout << "THIS YEAR IS LEAP YEAR";
	}else {
		cout << "regular year" ;
	}
	return 0;
	}
