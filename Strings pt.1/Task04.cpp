#include<iostream>
using namespace std;

void toLower(char* smbl) {
	if (smbl == nullptr)
		return;

	int i = 0;
	while (smbl[i] != '\0') {
		if (isupper(smbl[i]))		 
			smbl[i] += 'a' - 'A';	 
		i++;                         
	}
}

void toUpper(char* smbl) {
	if (smbl == nullptr)
		return;

	int i = 0;
	while (smbl[i] != '\0') {
		if (islower(smbl[i]))
			smbl[i] += 'A' - 'a';
		i++;
	}
}

int main() {

	char to_low[] = "dfgggg56ABCDDD";

	//toLower(to_low);
	toUpper(to_low);

	cout << to_low;


	return 0;

}
