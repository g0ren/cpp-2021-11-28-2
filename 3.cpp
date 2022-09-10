#include <iostream>
using namespace std;

int main() {
	const int pay { 50 }; // Pay for 100 lines of code
	const int fine { 20 }; //Fine for being late 3 times
	int income { 0 }, late { 0 }, lines { 0 };
	int operation { 0 };

	cout << "Enter operation you want to perform" << endl;
	cout
			<< "1 - Enter desired income and times Vasya was late and get the number of lines of code he has to write"
			<< endl;
	cout
			<< "2 - Enter the number of lines of code Vasya wrote and his desired income, get the number of times he can afford to be late"
			<< endl;
	cout << "0 - Exit (default)" << endl;
	do {
		cin >> operation;
		switch (operation) {
		case 0:
			return 0;
			break;
		case 1:
			cout << "Enter Vasya's desired income: ";
			cin >> income;
			cout << "Enter the number of times Vasya was late: ";
			cin >> late;
			lines = (income + late / 3 * fine) * 100 / pay;
			cout << "Vasya has to write " << lines << " lines of code" << endl;
			break;
		case 2:
			cout << "Enter Vasya's desired income: ";
			cin >> income;
			cout << "Enter the number of lines of code Vasya wrote: ";
			cin >> lines;
			late = -(income - lines / 100 * pay) * 3 / fine;
			if (late < 0) {
				cout
						<< "There's no way Vasya can get this much income! Write more code!"
						<< endl;
			} else {
				cout << "Vasya can afford to be late up to " << late << " times"
						<< endl;
			}
			break;
		default:
			cout << "Wrong operation!" << endl;
			continue;
		}
	} while (operation < 0 || operation > 2);

	return 0;
}
// income = lines/100*pay - late/3*fine
// lines = (income + late/3*fine)*100/pay
// late = -(income - lines/100*pay)*3/fine
