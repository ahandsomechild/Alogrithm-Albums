#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int gcd(int p, int q) {
	if (q == 0) {
		return p;
	}
	int r = p % q;
	return gcd(q, r);
}

void yuefen(int child, int mom) {
	int t;
	if (child % mom == 0) {
		t = child / mom;
		cout << t;
	}
	else{
		t = child / mom;
		if (t != 0) {
			child = child % mom;
			cout << t << " ";
		}
		int g = gcd(child, mom);
		child /= g;
		mom /= g;
		if (t != 0) {
			
		}
		cout << child << "/" << mom << endl;
	}
}

int main() {
	int n;
	cin >> n;
	int temp_c, temp_m;
	int child, mom;
	int k;//最小公倍数
	char c = '/';
	for (int i = 0; i < n; i++) {
		cin >> child >> c >> mom;
		if (i == 0) {
			temp_c = child;
			temp_m = mom;
		}
		else {
			k = temp_m * mom / gcd(temp_m, mom);
			temp_c = temp_c * mom / gcd(temp_m, mom);
			child = child * temp_m / gcd(temp_m, mom);
			temp_c = temp_c + child;
			temp_m = k;
		}
	}
	yuefen(temp_c, temp_m);
	return 0;
}