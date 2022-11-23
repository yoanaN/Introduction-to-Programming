#include<iostream>
using namespace std;
const int MAX_SIZE = 32;

void swap(char* a, char* b) {
	char* temp = a;
	a = b;
	b = temp;
}
void sortAscending(char* a, int n) {
	for (int i = 0;i < n-1;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

void sortDescending(char* a, int n) {
	for (int i = 0;i < n - 1;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i] < a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
int main() {

	int n;
	cout << "Insert the count of elements in the sequence: ";
	cin >> n;

	char a[MAX_SIZE];
	for (int i = 0;i < n;i++) {
		cout << "Insert element a" << i << ": ";
		cin >> a[i];
	}

	//sortAscending(a, n);
	sortDescending(a, n);
	
	return 0;

}
