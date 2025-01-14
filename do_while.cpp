#include <iostream>
#include <string>
using namespace std;

int  main () {
	string password;
	do{ 
		cout << "enter password: ";
		cin >> password;
	} while (password != "1234");
	cout << "correct!";
	
return 0;
}

