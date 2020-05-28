#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int atemp, btemp;//´æ´¢°ÙÎ»Êý
	atemp = a / 100;
	btemp = b / 100;
	if (a - b > 0) {
		if (atemp - 1 > 9 - btemp) {
			cout << atemp - 1;
		}
		else {
			cout << 9 - btemp;
		}
	}
	else {
		cout << "-";
	}

	cout << abs(a - b) % 100 << endl;

	return 0;
}