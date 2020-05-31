#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
struct timeData {
	char id[16];
	int inhour;
	int inminute;
	int insecond;
	int outhour;
	int outminute;
	int outsecond;
};

bool cmpin(timeData a, timeData b) {
	if (a.inhour != b.inhour) {
		return a.inhour < b.inhour;
	}else if (a.inminute != b.inminute) {
		return a.inminute < b.inminute;
	}
	else if (a.insecond != b.insecond) {
		return a.insecond < b.insecond;
	}
}

bool cmpout(timeData a, timeData b) {
	if (a.outhour != b.outhour) {
		return a.outhour > b.outhour;
	}
	else if (a.outminute != b.outminute) {
		return a.outminute > b.outminute;
	}
	else if (a.outsecond != b.outsecond) {
		return a.outsecond > b.outsecond;
	}
}

int main() {
	int n;
	cin >> n;
	char c = ':';
	timeData* data = new timeData[n];

	for (int i = 0; i < n; i++) {
		cin >> data[i].id;
		cin >> data[i].inhour >> c >> data[i].inminute >> c >> data[i].insecond;
		cin >> data[i].outhour >> c >> data[i].outminute >> c >> data[i].outsecond;
	}
	sort(data, data + n, cmpin);
	cout << data[0].id << " ";
	sort(data, data + n, cmpout);
	cout << data[0].id;
	return 0;
}