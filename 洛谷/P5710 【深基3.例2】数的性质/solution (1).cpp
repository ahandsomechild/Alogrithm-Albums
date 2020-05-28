#include<iostream>

using namespace std;

int main() {
	int f1 = 0, f2 = 0;
	int num;
	cin >> num;
	if (num % 2 == 0) f1 = 1;
	if (num > 4 && num <= 12) f2 = 1;

	if (f1 == 1 && f2 == 1) {
		cout << "1";
	}
	else {
		cout << "0";
	}

	cout << " ";
	if (f1 == 1 || f2 == 1) {
		cout << "1";
	}
	else {
		cout << "0";
	}

	cout << " ";
	if ((f1 == 1 && f2 == 0)|| (f1 == 0 && f2 == 1)) {
		cout << "1";
	}
	else {
		cout << "0";
	}

	cout << " ";
	if (f1 == 0 && f2 == 0) {
		cout << "1";
	}
	else {
		cout << "0";
	}

	cout << endl;
	return 0;
}