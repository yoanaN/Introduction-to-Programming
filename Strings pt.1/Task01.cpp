#include<iostream>
using namespace std;

int main() {
	char letter;
	cin >> letter;

	int numLine = 5;
	int counter = 1;
	
	cout << endl;
	for (int i = letter;i < letter + numLine;i++) {
		for (int j = i;j < i+counter;j++) {
			cout << (char)j;
		}
		cout << endl;
		counter++;
	}

	return 0;

}
