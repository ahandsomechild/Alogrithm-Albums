#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	char temp;
	int count = 1;
	int i;

	cin >> s;
	temp = s[0];
	for (i = 1; i < s.length(); i++) {
		if (s[i] != temp) {
			cout << count << temp;
			temp = s[i];
			count = 1;
		}
		else {
			count++;
		}
	}
	cout << count << temp;
	return 0;
}