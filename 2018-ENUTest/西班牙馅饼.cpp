#include<iostream>

using namespace std;

int main() {
	int n, m;
	int i, j;
	int k;
	cin >> n >> m;
	int sum = 0;
	for (i = 0; i < n; i++) {
		int max = -1;
		for (j = 0; j < m; j++) {
			cin >> k;
			if (k > max) {
				max = k;
			}
		}
		sum += max;
	}
	cout << sum << endl;
	return 0;
}