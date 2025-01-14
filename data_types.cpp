#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int age = 30;
	float height = 1.68;
	double pi = 3.1415293847362;
	
	char grade = 'A';
	string greeting = "hello world";
	
	cout << "age:" << age << endl;
	cout << "height:" << height<< endl;	
	cout << "PI number:" << setprecision(5) << pi <<endl;
	
	cout << "Grade:" << grade << endl;
	cout << "Greeting:" << greeting;
	
		return 0;
}
