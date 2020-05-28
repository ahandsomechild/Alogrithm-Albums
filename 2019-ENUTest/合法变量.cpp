#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	int f = 0;
	cin >> str;
	
	int i = 0;
	while (i < str.length()) {
		if (str[i] == '_') {
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9') {
			i++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z') {
			i++;
		}
		if (str[i] >= 'a' && str[i] <= 'z') {
			i++;
		}
		else {
			f = 1;
			break;
		}
	}
	if (str[0] >= '0' && str[0] <= '9') {
		f = 1;
	}
	if (f == 0) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
	return 0;
}