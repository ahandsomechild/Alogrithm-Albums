#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string a;
	int tag[10] = { 0 };
	int db[22];
	int temp;
	int i,j;
	cin >> a;
	
	for (i = 0; i < a.length(); i++) {
		temp = a[i] - '0';
		tag[temp]++;
	}
	j = 0;
	int jinwei = 0;
	for (i = a.length() - 1; i >= 0; i--) {
		temp = a[i] - '0';
		if (temp * 2+jinwei >= 10) {
			db[j++] = (temp * 2 + jinwei) % 10;
			jinwei = 1;
		}
		else {
			db[j++] = (temp * 2 + jinwei) ;
			jinwei = 0;
		}
	}
	if (jinwei == 1) {
		cout << "No" << endl;
		db[j++] = 1;
		tag[1]++;
	}
	else {
		for (i = 0; i < j; i++) {
			temp = db[i];
			tag[temp]--;
		}
		int flag = 0;
		for (i = 0; i < 10; i++) {
			if (tag[i] > 0) {
				flag = 1;
			}
		}
		if (flag == 1) {
			cout << "No" << endl;
		}
		else {
			cout << "Yes" << endl;
		}
	}
	
	
	for (i = j-1; i >=0; i--) {
		cout << db[i];
	}
	cout << endl;
	return 0;
}