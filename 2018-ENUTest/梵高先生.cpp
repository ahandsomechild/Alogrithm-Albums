#include<iostream>

using namespace std;

int main() {
	int n;
	int i, j;
	cin >> n;
	int a[20][20];
	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++) {
			a[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j <=i; j++) {
			if (j == 0 || j == i) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}		
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] != 0) {
				cout << a[i][j];
			}
			if (j < i) {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}