#include <iostream>
using namespace std;

int main() {
	const double MTS_cost { 2.6 };
	const double Megaphone_cost { 2 };
	const double Beeline_cost { 2.5 };
	const double Tele2_cost { 3 };
	int to { 0 }, from { 0 };
	double time { 0 }, cost { 0 };
	enum operators {
		MTS = 1, Megaphone, Beeline, Tele2
	};
	while (!(to >= 1 && to <= 4)) {
		cout << "List of mobile operators:" << endl;
		cout << "1 - MTS" << endl;
		cout << "2 - Megaphone" << endl;
		cout << "3 - Beeline" << endl;
		cout << "4 - Tele2" << endl;
		cout << "Enter the operator you're calling from: ";
		cin >> to;
		if (!(to >= 1 && to <= 4))
			cout << "Wrong operator!" << endl;
	}

	while (!(from >= 1 && from <= 4)) {
		cout << "Enter the operator you're calling to: ";
		cin >> from;
		if (!(from >= 1 && from <= 4))
			cout << "Wrong operator!" << endl;
	}

	cout << "Enter total duration of your call in minutes: ";
	cin >> time;

	if (to == from) {
		cost = 0;
	} else {
		switch (from) {
		case MTS:
			cost = MTS_cost;
			break;
		case Megaphone:
			cost = Megaphone_cost;
			break;
		case Beeline:
			cost = Beeline_cost;
			break;
		case Tele2:
			cost = Tele2_cost;
		}
	}

	cout << "Your call will cost " << time * cost << " Rub." << endl;

	return 0;
}
