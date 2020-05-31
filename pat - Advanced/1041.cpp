#include<iostream>

using namespace std;

int main() {
	int f[10001] = { 0 };
	int n, i;
	cin >> n;

	int* num = new int[n];
	int* ans = new int[n];
	for (i = 0; i < n; i++) {
		cin >> num[i];
		f[num[i]]++;
	}
	int j = 0;
	int flag = 0;
	for (i = 0; i < n; i++) {
		if (f[num[i]] == 1) {
			flag = 1;
			cout << num[i] << endl;
			break;
		}
	}
	if (flag == 0) {
		cout << "None" << endl;
	}
	return 0;
}