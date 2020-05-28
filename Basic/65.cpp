#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int cp_count, total;
	int i, j;
	int sum = 0;
	cin >> cp_count;
	int c1, c2;
	j = 0;
	int cp[100000] = { 0 };
	for (i = 0; i < cp_count; i++) {
		cin >> c1 >> c2;
		cp[c1] = c2;
		cp[c2] = c1;
	}
	cin >> total;
	int* guest = new int[total];
	int yes[100000] = { 0 };
	for (i = 0; i < total; i++) {
		cin >> guest[i];
		yes[guest[i]] = 1;
	}
	for (i = 0; i < total; i++) {
		int temp = guest[i];
		int couple = cp[temp];
		if (couple != 0 && yes[couple] == 1) { //这个客人有情侣且情侣也在场
			yes[couple] = 0;
			yes[temp] = 0;
		}
		else {
			sum++;
		}
	}
	j = 0;
	int* ans = new int[sum];
	for (i = 0; i < total; i++) {
		int temp = guest[i];
		if (yes[temp] == 1) {
			ans[j++] = temp;
		}
	}
	cout << j << endl;
	sort(ans, ans + j);
	for (i = 0; i < j; i++) {
		printf("%05d",ans[i]);
		if (i < j - 1) { printf(" "); }
	}
	return 0;
}