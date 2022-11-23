#include<iostream>
using namespace std;
const int MAX_SIZE = 32;

int countElement(double* a, int n,double f) {
	int count = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] == f) {
			count++;
		}
	}
	
	return count;
}

int main() {

	int n;
	cout << "Insert the count of elements in the sequence: ";
	cin >> n;

	double f;
	cout << "Insert the number you are looking for: ";
	cin >> f;

	double a[MAX_SIZE];
	for (int i = 0;i < n;i++) {
		cout << "Insert element a" << i << ": ";
		cin >> a[i];
	}

	int count = countElement(a, n, f);
  
	return 0;

}
