

#include<iostream>
#include<algorithm>

using namespace std;

#define maxsize 100100
#define INF 1000000000

int main() {
	int n, i;
	int a[maxsize], leftmax[maxsize], rightmin[maxsize], result[maxsize];
	int sum = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	leftmax[0] = 0;
	//左边第一个数的leftmax的是自己，题目中给出的是不同的数
	for (i = 1; i <= n - 1; i++) {
		leftmax[i] = max(leftmax[i - 1], a[i - 1]);
	}
	rightmin[n - 1] = INF;
	for (i = n - 2; i >= 0; i--) {
		rightmin[i] = min(rightmin[i + 1], a[i + 1]);
	}
	for (i = 0; i < n; i++) {
		if (a[i] > leftmax[i] && a[i] < rightmin[i]) {
			result[sum++] = a[i];
		}
	}
	cout << sum << endl;
	sort(result, result + sum);
	for (i = 0; i < sum; i++) {
		cout << result[i];

		if (i < sum - 1) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}