#include <iostream>
using namespace std;

int main () {
	int choice;
	do{
		cout << "1. New game\n";
		cout << "2. Continue\n";
		cout << "3. Exit\n";
		cout << "Choice: ";
		cin >> choice;
	} while (choice < 1 || choice > 3);
	return 0;
}
