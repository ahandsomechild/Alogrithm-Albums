#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string a, b;
	int i = 0, j;
	int f = 0;//是否产生进位
	int ans[510];
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	string temp;
	//保证大数a的长度>=b的长度
	if (a.length() < b.length()) {
		temp = a;
		a = b;
		b = temp;
	}
	int len_max = a.length() > b.length() ? a.length() : b.length();
	int len_min = a.length() <= b.length() ? a.length() : b.length();
	for (i = 0; i < len_min; i++) {
		int temp = (a[i] - '0') + (b[i] - '0') + f;
		ans[i] = temp % 10;
		if (temp >= 10) {
			f = 1;
		}
		else {
			f = 0;
		}
	}
	if (a.length() > b.length()) {
		while (i < a.length()) {
			int temp = (a[i] - '0') + f;
			ans[i] = temp % 10;
			if (temp >= 10) {
				f = 1;
			}
			else {
				f = 0;
			}
			i++;
		}
	}		
	if (f == 1) {
		cout << f;
	}
	for (j = i-1; j >= 0; j--) {
		cout << ans[j];
	}
	
	return 0;
}