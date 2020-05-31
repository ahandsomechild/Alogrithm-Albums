#include<iostream>
#include<algorithm>

#define maxsize 1010 
using namespace std;

int main() {
	int k1, k2, t1;
	double t2;
	int i;
	double n1[maxsize] = { 0 };
	cin >> k1;
	while (k1--) {
		cin >> t1 >> t2;
		n1[t1] += t2;
	}
	cin >> k2;
	while (k2--) {
		cin >> t1 >> t2;
		n1[t1] += t2;
	}
	int sum = 0;
	for (i = 0; i <1001; i++) {
		if (n1[i] != 0) {
			sum++;
		}
	}
	cout << sum;
	if (sum != 0) {
		cout << " ";
	}
	
	for (i = 1001; i>=0; i--) {
		if (n1[i] != 0) {
			printf("%d %.01f", i, n1[i]);
			sum--;
			if (sum > 0) {
				cout << " ";
			}
		}
	}
	cout << endl;
	return 0;
}