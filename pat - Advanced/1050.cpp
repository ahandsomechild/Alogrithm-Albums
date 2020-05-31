#include<iostream>
#include<string>
using namespace std;

int main() {
	int flag[200] = { 0 };
	string str1, str2;
	int space = 0;
	getline(cin, str1);
	getline(cin, str2);
	for (int i = 0; i < str2.length(); i++) {
		if (str2[i] != ' ') {
			int t = str2[i];
			flag[t]++;
		}
		else {
			space = 1;
		}
	}
	for (int j = 0; j < str1.length(); j++) {
		if (str1[j] != ' ') {
			int t = str1[j];
			if (flag[t] == 0) {
				cout << str1[j];
			}
		}
		else {
			if (space == 0) {
				printf(" ");
			}
		}
	}
	cout << endl;
	return 0;
}