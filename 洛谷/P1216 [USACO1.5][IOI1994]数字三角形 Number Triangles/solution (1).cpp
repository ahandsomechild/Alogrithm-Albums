#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;
/*
7				-----	7
3 8				-----	10 15
8 1 0			-----	18 16 15
2 7 4 4			-----	
4 5 2 6 5

*/
//int a[1001][1001] = { 0 };
int main() {
	int row;
	int i, j;
	cin >> row;
	int a[row][row] = { 0 };
	for (i = 0; i < row; i++) {
		for (j = 0; j < i + 1; j++) {
			cin >> a[i][j];
			if (i > 0 && j==0) {
				a[i][j] += a[i - 1][j];
			}
			else if (j > 0 && j < i) {
				a[i][j] = max(a[i - 1][j - 1] + a[i][j], a[i - 1][j] + a[i][j]);
			}
			else if (i > 0 && j == i) {
				a[i][j] += a[i - 1][j - 1];
			}
		}
	}
	
	sort(a[row - 1], a[row - 1] + row);
	cout << a[row - 1][row - 1] << endl;
	return 0;
}