#include<iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (!cin || x < 1 || y < 1) {
		cout << "Invalid input";
		return 1;
	}
	
	for (int rows = 0;rows < y;rows++) {
		for (int cols = 0;cols < x;cols++) {
			if (rows == 0 || rows == y - 1 || cols==0 || cols==x-1) {
				cout << "*";
			}
			else {
				cout << " ";
			}		
		
		}
		cout << endl;
	}
  
	return 0;

}
