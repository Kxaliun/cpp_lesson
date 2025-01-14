#include <iostream>
#include <string>
using namespace std;

int main () {
	string text;
	char ch;
	int i, letters=0, digits = 0, spaces = 0, special = 0 ;
	
	//text = "jfksjfns fjjsak847 #$%^ jfn& *gd8dh";
	cout << "enter text: " ;
	getline(cin,text); 
	
	for (i = 0; i<text.length(); i++) {
		ch = text[i];
		if (isalpha(ch)) letters++;
		else if (isdigit(ch)) digits++;
		else if (isspace(ch)) spaces++;
		else special++;
	}
	cout << "Letters: " << letters<< endl;
	cout << "Digits: " << digits << endl;
	cout << "Spaces: " << spaces << endl;
	cout << "Special chars: " << special <<endl;
	return 0;
}
