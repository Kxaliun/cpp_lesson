#include <iostream>
#include <string>
using namespace std;

 int main () {
	int day;
	string dayName;
	cout << "day number (0-6): " ; cin >> day;
	switch (day) {
	case 0: 
		dayName = "sunday" ;
		break;
	case 1:
		dayName = "monday";
		break;
	case 2: 
		dayName = "tuesday";
		break;
	case 3: 
		dayName = "wednesday" ;
		break;
	case 4:
		dayName = "thursday";
		break;
	case 5: 
		dayName = "friday";
		break;
	case 6: dayName = "saturday"; break;
	default : dayName = "wrong number";
	
	}
	cout << dayName;
	return 0;
}
