#include <string>
#include <iostream>
using namespace std;

int main () {
string firstName = "Bat";
string lastName = "Bold";
cout << "fisrt name: " << firstName<< endl;
cout << "last name: " << lastName<< endl;
string fullName = firstName + " " + lastName;

cout << "full name: " << fullName<<endl;


int length = fullName.length();

cout << "length: " << length << endl;

char firstChar = firstName[0];

cout << "first char: " << firstChar<< endl;

cout << fullName.substr(0,3) << endl;
cout << fullName.find("Bold") << endl;
cout << fullName.empty() <<endl;
 fullName.push_back('^');
cout << fullName <<endl;

fullName.replace(0,3, "Dulam");
cout << fullName << endl;
fullName.insert(5, "jav");
cout << fullName << endl;
fullName.erase(9,4);
cout << fullName << endl;
fullName.resize(15, '*');
cout << fullName << endl;

return 0;
}
