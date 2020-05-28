#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int* a = new int[m];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}

	sort(a, a + m);
	for (int j = 0; j < m; j++) {
		cout << a[j];
		if (j < m - 1) {
			cout << " ";
		}
	}
	return 0;
}