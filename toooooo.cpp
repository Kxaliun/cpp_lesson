#include <iostream>
using namespace std;

int main () {
	int secret= 49 ,guess;
	while (true) {
	cout << "enter number: ";
	cin >> guess;
	if (guess== secret) {
		cout << "zuvshu zuv!";
		break;
	}
	cout << "dahin orold oo ci!\n";
}
	return 0;
}
