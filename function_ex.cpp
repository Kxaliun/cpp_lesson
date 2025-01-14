#include <iostream>
using namespace std;

void sayHello();
int square(int x);
int factorial(int x);

int main () {
	int n;
	cout<< "enter n: " ; cin >> n;
	sayHello ();
	cout << "square: " <<  square(n) << endl;
	cout << "factorial: " << factorial(n) << endl;
	
	return 0;
	
}

void sayHello() {
	cout << "HELLO WORLD!" << endl;
	
}

int square(int x){
	return x*x;
}
int factorial(int x) {
	int i, s=1;
	
	for (i=1; i<= x; i++) {
		s = s*i;
	}
	return s;
}

