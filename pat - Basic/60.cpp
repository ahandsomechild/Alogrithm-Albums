#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
const int INF = 100001;
int main() {
	int n, i, j;
	cin >> n;

	int* a = new int[n];
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);

	//6 7 6 9 3 10 8 2 7 8
	//2 3 6 6 7 7 8 8 9 10
	
	//	    6 6 5 4 3 2 1
	if (a[0] > n) {
		cout << n << endl;
	}
	else {
		for (i = n - 1; i >= 0; i--) {
			if (a[i] <= n - i) {
				cout << n - i - 1 << endl;
				break;
			}
		}
	}
	return 0;
}