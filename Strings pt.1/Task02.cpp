#include<iostream>
using namespace std;

bool is_alpha(char smbl) {
	return (smbl >= 'A' && smbl <= 'Z') || (smbl >= 'a' && smbl <= 'z');
}

int main() {

	char symbol;
	cout << "Insert a symbol: ";
	cin >> symbol;

	if (is_alpha(symbol)) {
		cout << "The symbol is a letter!";
	}
	else {
		cout << "The symbol is not a letter!";
	}


	return 0;

}
