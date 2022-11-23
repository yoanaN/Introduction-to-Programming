#include<iostream>
using namespace std;
const int MAX_SIZE = 32;

double minElement(double* a,int n) {
	double minEl = a[0];
	for (int i = 1;i < n;i++){
		if (minEl > a[i]) 
			minEl = a[i];
	}
	return minEl;
}

double sumElemens(double* a, int n) {
	double sum = 0;
	for (int i = 0;i < n;i++) {
		cout << "Insert element a" << i << ": ";
		cin >> a[i];
		sum += a[i];
	}
	return sum;
}

int main() {
	int n;
	cout << "Insert the count of elements in the sequence: ";
	cin >> n;

	double a[MAX_SIZE];

	double sum = sumElemens(a,n);	
	double average = sum / n;
	double minEl=minElement(a,n);

	return 0;

}
