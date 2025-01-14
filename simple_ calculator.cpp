#include <iostream>
using namespace std;

int main () {
	int ind = 1;
	float a, b, c;
	char t;
	cout <<"enter a: "; cin >> a;
	cout << "enter b: "; cin >> b;
	cout << "operation (+, -, *, /)"; cin >> t;
	if (t=='+') {
		c = a+b;
	} else if (t=='-') {
		c= a-b;
	} else if (t=='*') {
		c= a*b ;
	}else{
		if (b!=0) {
			c= a/b;
		} else {
			ind = 0;
			cout << "0d hvaaj blhgu";
		}
	}
	if (ind) {
		cout <<a << t << b << "=" << c;
	}
	return 0;
}
