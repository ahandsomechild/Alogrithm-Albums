#include<iostream>
//≤‚ ‘µ„ 0 168
using namespace std;

void print(int a) {
	if (a <= 9) {
		cout << a;
	}
	else {
		switch (a)
		{
			case 10:
				cout << "A";
				break;
			case 11:
				cout << "B";
				break;
			case 12:
				cout << "C";
				break;
			default:
				break;
		}
	}
}

void toMarColor(int a) {
	int temp[2];
	int j = 0;
	if (a == 0) {
		printf("00");
	}
	else {
		while (a) {
			temp[j++] = a % 13;
			a /= 13;
		}

		if (j == 1) {
			printf("0");
			print(temp[0]);
		}
		else {
			for (int i = j - 1; i >= 0; i--) {
				print(temp[i]);
			}
		}
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << "#";
	toMarColor(a);
	toMarColor(b);
	toMarColor(c);
	cout << endl;
	return 0;
}