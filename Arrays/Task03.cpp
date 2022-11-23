#include<iostream>
using namespace std;
const int MAX_SIZE = 32;

int main() {

	int n;
	cout << "Insert the count of elements in the sequence: ";
	cin >> n;

	char a[MAX_SIZE];
	for (int i = 0;i < n;i++) {
		cout << "Insert element a" << i << ": ";
		cin >> a[i];
	}

	for (int i = 0;i < n;i++) {
		if (a[i] >= '0' && a[i] <= '9')
			cout << a[i] << endl;
	}

	return 0;

}
