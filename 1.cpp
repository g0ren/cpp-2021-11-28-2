#include <iostream>
using namespace std;

int main() {
	char x;
	int i { 0 };
	cout << "Enter a character: ";
	cin >> x;
	i = (int) x;
	if (i >= 48 && i <= 57) {
		cout << "This character is a number" << endl;
	} else if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)) {
		cout << "This character is a letter" << endl;
	} else if (i > 32 && i < 127) {
		cout << "This character is punctuation" << endl;
	} else {
		cout << "This character is a technical symbol" << endl;
	}

	return 0;
}
