#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

struct student {
	string name;
	int height;
};

bool cmp(student a, student b) {
	if (a.height != b.height) {
		return a.height < b.height;
	}
	else {
		return a.name > b.name;
	}
}
int main() {
	int n, k;
	int i, j, m;
	cin >> n >> k;

	student* a = new student[n];
	for (i = 0; i < n; i++) {
		cin >> a[i].name >> a[i].height;
	}

	int p = n / k; // 前排每排人数
	int lastp = n - p * (k - 1); //最后一排每排人数

	sort(a, a + n, cmp);

	int cur = k - 1;//当前排数
	int left = 1;
	
	while (cur >= 0) {
		if (cur == k - 1) {
			left = 1;
			int* temp = new int[lastp];
			i = j = lastp / 2;
			temp[i] = n - 1;
			for (m = n - 2; m >= n - lastp; m--) {
				if (left == 1) {
					temp[--i] = m; left = 0;
				}
				else {
					temp[++j] = m; left = 1;
				}
			}
			for (m = 0; m < lastp; m++) {
				int tt = temp[m];
				cout << a[tt].name;
				if (m < lastp - 1) {
					cout << " ";
				}
			}
			cout << endl;
		}
		//0 1 2 | 3 4 5 | 6 7 8 9
		//cur = 2  n-1  n-lastp
		//cur = 1  n-lastp-1-p(k-2-cur) 10-4-1-3*0 = 5  n-lastp-p*(k-1-cur) 10-4-3=3
		//cur = 0	10-4-1-3*1 = 2	10-4-3*2 = 0
		else {
			left = 1;
			int* temp = new int[p];
			i = j = p / 2;
			temp[i] = n - lastp - 1 - p*(k - 2 - cur);
			for (m = n - lastp - 2 - p * (k - 2 - cur); m >= n - lastp - p * (k - 1 - cur); m--) {
				if (left == 1) {
					temp[--i] = m; left = 0;
				}
				else {
					temp[++j] = m; left = 1;
				}
			}
			for (m = 0; m < p; m++) {
				int tt = temp[m];
				cout << a[tt].name;
				if (m < p - 1) {
					cout << " ";
				}
			}
			cout << endl;
		}
		cur--;
	}
		
	return 0;
}