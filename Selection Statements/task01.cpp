#include<iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter 3-digit number: " << endl;
	cin >> num;

	if (num < 100 || num > 999) {
		cout << "Incorrect input!";
		return 1;
	}

	cout << num % 10 << (num / 10) % 10 << num / 100;

	return 0;
}
