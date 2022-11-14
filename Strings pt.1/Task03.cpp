#include<iostream>
using namespace std;

bool is_digit(char smbl) {
	return (smbl >= '0' && smbl <= '9');
}

int main() {

	char symbol;
	cout << "Insert a symbol: ";
	cin >> symbol;

	if (is_digit(symbol)) {
		cout << "The symbol is a digit!";
	}
	else {
		cout << "The symbol is not a digit!";
	}


	return 0;

}
