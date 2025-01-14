#include <iostream>
using namespace std;

int main () {
	int i, s=0;
	for (i=1; i<= 10; i++) {
		s+=i;
	}
	/* 
	1st : i=1 s=0; i=2 s=1
	2nd : i=2 s=1; i=3 s=1+2=3
	3rd : i=3 s=2; i=4 s=3+3=6
	*/
	cout << "Summa: " << s << endl;
	// foctorial
	s=1;
	for (i=1; i<=10; i++) {
		s=s*i;
	}
	cout<< "factorial: "<< s << endl;
	
	// 1-100 hurtelh tegsh tooni niilbr
	s=0;
	for(i=1; i<=100; i++){
		if (i%2==0) {
		s=s+i;
	}
	}
	cout << " summa(even): "<< s;
	return 0;
}
