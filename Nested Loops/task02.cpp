#include<iostream>
using namespace std;

int main() {

	int n, currentNum;
	cin >> n;
	int sum = 0;

	for (int i = 0;i < n;i++) {
		cin >> currentNum;
		while (currentNum) {
			sum += currentNum % 10;
			currentNum /= 10;
		}
	}
	cout << sum;

	return 0;

}
