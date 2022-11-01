#include<iostream>
using namespace std;

int main() {

	double a, b, c;
	cout << "Enter 3 real numbers"<<endl;
	cin >> a >> b >> c;

	if (a >= b) {
		if (a >= c) {
			cout << "Largest number: " << a;

		}
		else {
			cout << "Largest number: " << c;
		}
	}
	else {
		if (b >= c) {
			cout << "Largest number: " << b;
		}
		else {
			cout << "Largest number: " << c;
		}
	}
	

	return 0;
}
