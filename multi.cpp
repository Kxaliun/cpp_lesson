#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main (){
	string text = "Programming";
	int a= 5, b = 6, area, p;

	area = a * b;
	p=(a + b) * 2;
	
	cout << "Length:" << text.length()  << endl;
	cout << "First char:" << text[5] <<endl;
	cout << "Sub string:" << text.substr(3,5) << endl;
	 	
	cout << "Area:" << area << endl;
	cout <<"Perimeter:" << p;
	
	return 0;
}
