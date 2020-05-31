#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

struct chengji {
	string name;
	char gender;
	string id;
	int grade;
};

bool cmp(chengji a, chengji b){
	if (a.gender != b.gender) {
		return a.gender > b.gender;
	}
	else {
		return a.grade < b.grade;
	}
}

int main() {
	int n, i;
	cin >> n;
	chengji* data = new chengji[n];
	int m = 0, k = 0;
	for (i = 0; i < n; i++) {
		cin >> data[i].name >> data[i].gender >> data[i].id >> data[i].grade;
		if (data[i].gender == 'F') {
			k++;
		}
		if (data[i].gender == 'M') {
			m++;
		}
	}
	sort(data, data + n, cmp);
	if (k == 0) {
		cout << "Absent" << endl;
	}
	else {
		cout << data[n - 1].name << " " << data[n - 1].id << endl;
	}
	if (m == 0) {
		cout << "Absent" << endl;
	}
	else {
		cout << data[0].name << " " << data[0].id << endl;
	}
	if (k != 0 && m != 0) {
		cout << data[n - 1].grade - data[0].grade << endl;
	}
	else {
		cout << "NA" << endl;
	}
	
	return 0;
}