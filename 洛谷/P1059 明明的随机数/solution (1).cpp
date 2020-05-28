#include<iostream>
#include<algorithm>

using namespace std;


int main() {
	int n, i,j;
	int a[1001];
	int res[1001];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int temp = a[0];
	int k = 0;
	res[k++] = temp;
	for (j = 1; j < n; j++) {
		if (a[j] != temp) {
			temp = a[j];
			res[k++] = a[j];
		}		
	}
	cout << k<<endl;
	for (j = 0; j < k; j++) {
		cout << res[j];
		if (j < k - 1) {
			cout << " ";
		}
	}
	return 0;
}