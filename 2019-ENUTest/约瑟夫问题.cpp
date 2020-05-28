#include<iostream>

using namespace std;

int main() {
	int t;
	long long int n, m, k;//n个人,数到m出圈,第k个
	long long int i, j, count;

	cin >> t;
	while (t--) {
		cin >> n >> m >> k;

		long long int* f = new long long int[n+1];

		for (i = 0; i <= n; i++) {
			f[i] = 0;
		}
		i = 0; j = 0, count = 0;
		while (count < k) {
			i++;
			if (i == n + 1) {
				i = 1;
			}
			if (f[i] == 0) {
				j++;
			}			
			if (j == m) {
				j = 0;
				count++;
				
				if (count == k) {
					cout << i << endl;
				}
				f[i] = 1; //已出圈
			}
			
		}
		
	}
	return 0;
}