#include <iostream>
using namespace std;

int main () {
	int a ,b, c ;
	cout << "enter a,b: "; cin >> a >> b;
	c = a;
	a=b;
	b=c;
	cout << "a: " << a << endl;
	cout << "b: " << b;
	
	return 0;
}
