//helloworld! 11 n1=4 n2=5

#include<iostream>
#include<string.h>
using namespace std;
int getk(int n) {
	for (int i = 3; i <= n; i++) {
		if ((n - i + 2) % 2 == 0 && (n - i + 2) / 2 <= i) {
			return (n - i + 2) / 2 ;
		}
	}
}
int main() {
	string str;
	int i, j;
	int left, bottom;
	cin >> str;
	left = getk(str.length());
	bottom = str.length() - left * 2 + 2 ;
	//45
	char a[30][30];

	memset(a,' ', sizeof(a));
	j = 0;
	for (i = 0; i < left; i++) {
		a[i][0] = str[j++];
	}
	for (i = 1; i <= bottom-2; i++) {
		a[left -1][i] = str[j++];
	}
	for (i = left - 1; i >= 0; i--) {
		a[i][bottom-1] = str[j++];
	}

	for (i = 0; i < left; i++) {
		for (j = 0; j < bottom; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}