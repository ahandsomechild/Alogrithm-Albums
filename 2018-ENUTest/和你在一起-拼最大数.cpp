#include<iostream>
#include<string>

using namespace std;

int main() {
	int n, i, j;
	string str[21];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str[i];
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (str[i] + str[j] < str[j] + str[i]) {
				string temp;
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		cout << str[i];
	}
	cout << endl;
	return 0;
}