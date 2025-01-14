#include <iostream>
using namespace std;

int hbeh(int a, int b);

int main () {
	int a , b;
	cout << "ENTER a: " ; cin >> a;
	cout << "enter b: "; cin >> b;
	cout <<"HBEH: " << hbeh(a,b) << endl;
	return 0;
}

int hbeh(int a, int b) {
	int i , c;
	for (i=1; i <= a * b; i++){
		if (i%a==0 && i%b==0){
			return i;
		}
	}
}
