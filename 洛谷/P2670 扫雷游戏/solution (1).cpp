#include<iostream>

using namespace std;

int main() {
	int m, n, i, j;
	char a[101][101];
	int b[101][101];
	cin >> m >> n;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	/*
	a[i-1][j-1] a[i-1][j] a[i-1][j+1]
	a[i][j-1]   a[i][j]   a[i][j+1]
	a[i+1][j-1] a[i+1][j] a[i+1][j+1]
	*/
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			int flag = 0;
			if (i - 1 >= 0) {
				if (j - 1 >= 0 && a[i - 1][j - 1] == '*') {
					flag++;
				}
				if (a[i - 1][j] == '*') {
					flag++;
				}
				if (j + 1 < n && a[i - 1][j + 1] == '*') {
					flag++;
				}
			}
			if (j - 1 >= 0 && a[i][j - 1] == '*') {
				flag++;
			}
			if (j + 1 < n && a[i][j + 1] == '*') {
				flag++;
			}
			if (i + 1 < m) {
				if (j - 1 >= 0 && a[i + 1][j - 1] == '*') {
					flag++;
				}
				if (a[i + 1][j] == '*') {
					flag++;
				}
				if (j + 1 < n && a[i + 1][j + 1] == '*') {
					flag++;
				}
			}
			b[i][j] = flag;
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] == '*') {
				cout << "*";
			}
			else {
				cout << b[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}