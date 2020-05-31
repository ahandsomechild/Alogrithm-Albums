#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, b, temp;
	vector<int> a,re;
	int i;
	cin >> N >> b;
	while (N) {
		temp = N % b;
		a.push_back(temp);
		N /= b;
	} 
	for (i = a.size()-1; i >= 0; i--) {
		re.push_back(a[i]);
	}
	int flag = 1;
	for (i = 0; i < a.size(); i++) {
		if (a[i] != re[i]) {
			flag = 0;
			break;
		}
	}
	if (flag == 0) {
		cout << "No" << endl;
	}
	else {
		cout << "Yes" << endl;
	}
	for (i = 0; i < a.size(); i++) {
		cout << re[i];
		if (i < a.size() - 1) {
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}