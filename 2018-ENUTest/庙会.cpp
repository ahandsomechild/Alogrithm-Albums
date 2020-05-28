#include<iostream>

using namespace std;

int main() {
	int m, n, k;
	int i, j, count = 0;
	cin >> m >> n >> k;
	i = 1; j = 1;
	while (count < k) {
		cout << i << " " << j << endl;
		i++;
		j++;
		count++;
		if (i > m) { i = 1; }
		if (j > n) { j = 1; }
	}
	return 0;
}