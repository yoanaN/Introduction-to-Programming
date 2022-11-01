#include<iostream>
using namespace std;

int main() {

	int a, b, c;
	cout << "Enter the sides of a triangle" << endl;
	cin >> a >> b >> c;

	if ((a > 0 && b > 0 && c > 0) &&                 
		(a + b > c) && (a + c > b) && (b + c > a)) { 
		cout << "Triangle exists!" << endl;
	}
	else {
		cout << "Triangle doesn't exist!" << endl;
	}

	return 0;
}
