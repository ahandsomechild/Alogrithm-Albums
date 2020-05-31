#include<iostream>
#include<map>

/*
2 1 2.4 0 3.2
2 2 1.5 1 0.5

	3 2.4*1.5
	2 2.4*0.5+3.2*1.5	
	1 3.2*0.5
*/
using namespace std;

int main() {
	map<int,double> a;
	map<int, double, greater<int>> b;
	int i, j;

	int n;
	cin >> n;
	for (i = 0; i < n; i++) {
		int x; double y;
		cin >> x >> y;
		a[x] = y;
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		map<int, double>::iterator j = a.begin();
		int x; double y;
		cin >> x >> y;
		for (; j != a.end(); j++) {
			int t1 = j->first + x;
			double t2 = j->second * y;
			if (b.find(t1) == b.end()) {
				b[t1] = t2;
			}
			else {
				b[t1] += t2;
				if (b[t1] == 0.0) {
					b.erase(t1);
				}
			}
		}
	}
	cout << b.size();
	map<int, double, greater<int>>::iterator z = b.begin();
	for (; z != b.end(); z++) {
		printf(" %d %.1f", z->first, z->second);
	}
	return 0;
}