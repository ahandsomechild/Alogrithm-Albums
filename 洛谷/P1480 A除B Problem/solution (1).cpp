#include<iostream>
#include<string>
//高精度/低精度
using namespace std;
#define maxsize 5010

//
int main() {
	string a;
	int b;
	int i, j;
	int ans[maxsize];
	cin >> a >> b;

	if (a.length() == 1 && a[0]-'0' == 0) {
		cout << "0" << endl;
		return 0;
	}
	int temp = 0;
	j = 0;
	for (i = 0; i < a.length(); i++) {
		int t = a[i] - '0';
		temp = temp * 10 + t;
		if (temp >= b) {
			//cout << temp << endl;
			ans[j] = temp / b;
			temp = temp % b;
			//cout << ans[j] << " " << temp << endl;
		}
		else {
			ans[j] = 0;
		}
		j++;
	}
	int zero = 0;
	//cout << temp << endl;
	for (i = 0; i < j; i++) {
		if (ans[i] != 0) {
			zero = 1;
		}
		if (zero) {
			cout << ans[i];
		}
	}
	return 0;
}