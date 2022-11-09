#include<iostream>
#include<iomanip>
using namespace std;


int main() {
	int n;
	cin >> n;
	if (!cin) {
		cout << "Invalid input";
		return 1;
	}

	int counter = 1;
	for (int i = 0;i <= n;i++) {
		for (int j = 1;j < counter;j++) {
			cout << j << " ";
		}
		counter++;
		cout << endl;
	}
	cout << endl;

	int count = n;
	for (int k = 0;k <= n;k++) {
		for (int p = 0;p < k;p++) {
			cout << setw(2) << " ";
		}
		for (int l = 1;l <=count;l++) {
			cout <<setw(2)<< l;
		}
		count--;
		cout << endl;
	}
	cout << endl;

	
	return 0;

}
