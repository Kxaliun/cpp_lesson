#include <iostream>
using namespace std;

int main () {
	int n = 12;
	int i= 1, hih;
	while (i<= n) {
		if (n%i ==0) {
			cout << i << " ";
			if (i!=n) hih=i;
		}
		i= i+1;
	} 
	cout << "\nHIH: " << hih;
	return 0;
}
