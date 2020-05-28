#include<iostream>

#define maxn 100000
using namespace std;
int hashTable[10] = { 0 };
int n;
int temp[11];
int ans[maxn];
int j = 0;
void getNum(int index) {
	int i, x;
	if (index == n) {
		int t_number = 0;
		for (i = 0; i < n; i++) {
			t_number = t_number * 10 + temp[i];
		}
		//12
		int left, right;
		int r = 1;
		for (i = 0; i < n / 2; i++) {
			r *= 10;
		}
		if (n % 2 == 0) {
			left = t_number / r;
		}
		else {
			left = t_number / (r * 10);
		}
		right = t_number % r;
		if (right!=0 &&left % right == 0) {
			ans[j++] = t_number;
		}
		return;
	}
	for (x = 0; x < n; x++) {
		if (hashTable[x] == 0) {
			hashTable[x] = 1;
			temp[index] = x;
			getNum(index + 1);
			hashTable[x] = 0;
		}
	}
}
int main() {
	cin >> n;
	getNum(0);

	for (int i = 0; i < j; i++) {
		int t = ans[i];
		int weishu = 0;
		while (t) {
			weishu++;
			t /= 10;
		}
		if (weishu < n) {
			for (j = 0; j < n - weishu; j++) {
				cout << "0";
			}
		}
		cout << ans[i]<<endl;
	}
	return 0;
}