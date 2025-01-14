#include <iostream>
using namespace std;

int countLeapYear (int y1, int y2);
bool isLeapYear(int y);
int countDays(int m);
int garig(y,m,d)
int main () {
	int i, j, gar1, y, m, s, d, gar;
	cout <<  "year:  " ; cin >> y;
	cout << "month: "; cin>> m;
	cout << "date: " ; cin >> d;

	s = 365 * (y-2000) + countLeapYear(2000, y);
	
	if (isLeapYear(y) && m> 2) s++;
	
	s = s + countDays(m) + d - 1;
	gar= (s-1)%7;
	
	cout << "    jan, "<< y << endl;
	cout << "mo tu we th fr sa su"<< endl;
	gar1= garag(y,m,1)
	for (j=1; j)
	
	return 0;
}

int countLeapYear (int y1, int y2) {
	int s = 0, y;
	for(y=y1; y<y2; y++) {
		if (y % 400==0|| (y%4 ==0 && y%100!= 0)) s++;
	}
	return s;
} 
bool isLeapYear(int y) {
	if (y % 400==0|| (y%4 ==0 && y%100!= 0)) return true;
	return false;
	
}

int countDays(int m) {
	switch (m) {
		case 1:return 0;break;
		case 2:return 31;break;
		case 3:return 59;break;
		case 4:return 90;break;
		case 5:return 120;break;
		case 6 :return 151;break;
		case 7:return 181;break;
		case 8:return 212;break;
		case 9:return 243;break;
		case 10:return 273;break;
		case 11:return 304;break;
		case 12:return 334;break;
		
	}
}
