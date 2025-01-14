#include <iostream>
using namespace std;

int main (){
	int min, max, s, i, numbers[5] ;
	
	for(i = 0; i <= 4; i++){
		cout << i << " value: ";
		cin >> numbers[i];
	}
	max = numbers[0]; min = numbers[0];
	for(i = 0; i <= 4; i++){
		if (numbers[i] > max) max = numbers[i];
		if (numbers[i] < min) min = numbers[i];
	}
	
	cout << "MAX value: " << max << endl;
	cout << "Min value: " << min;
	return 0;
}
