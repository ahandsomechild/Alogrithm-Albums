#include<iostream>
#include<string>
#include<vector>
//0 O l 1
//0--%
//1--@
//l--L
//O--o
using namespace std;

struct per {
	string name;
	string pwd;
};
void print(string str){
	for (int i = 0; i < str.length(); i++) {
		switch (str[i]) {
			case '0':
				cout << "%";
				break;
			case 'O':
				cout << "o";
				break;
			case '1':
				cout << "@";
				break;
			case 'l':
				cout << "L";
				break;
			default:
				cout << str[i];
				break;
		}
	}
}
int main() {
	int n;
	int i, j, k;
	per p;
	int sum = 0;
	int temp[1001];
	vector<per> user;
	cin >> n;
	k = 0;
	for (i = 0; i < n; i++) {
		cin >> p.name >> p.pwd;
		user.push_back(p);
		int flag = 0;
		for (j = 0; j < p.pwd.length(); j++) {
			if (p.pwd[j] == '0' || p.pwd[j] == 'O' || p.pwd[j] == 'l' || p.pwd[j] == '1') {
				flag = 1;
			}
		}
		if (flag == 1) {
			temp[k++] = i;
			sum++;
		}
	}
	if (sum == 0) {
		if (n == 1) {
			cout << "There is ";
		}
		else if(n>1){
			cout << "There are ";
		}
		cout << n;
		if (n == 1) {
			cout << " account";
		}
		else if (n > 1) {
			cout << " accounts";
		}
		cout << " and no account is modified";
	}
	else {
		cout << sum << endl;
		for (i = 0; i < k; i++) {
			int t = temp[i];
			cout << user[t].name << " ";
			print(user[t].pwd);
			cout << endl;
		}
	}
	
	return 0;
}